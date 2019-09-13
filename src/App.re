open ReactUtils;
open AppStyles;
open Gs;
open GsUi;
open ReasonUrql.Hooks;

module Components = {
  module VersionInfoDisplay = {
    open Core;

    [@react.component]
    let make = (~response) => {
      <div>
        <Heading> "Client Build Time"->string </Heading>
        <Text>
          {Env.buildTime->Js.Date.fromString->Js.Date.toLocaleString->string}
        </Text>
        <Heading> "Client Build Version"->string </Heading>
        <Text> <pre> Env.gitCommit->string </pre> </Text>
        <Heading> "Client Build Branch"->string </Heading>
        <Text> <pre> Env.gitBranch->string </pre> </Text>
        {switch (response) {
         | ReasonUrql.Types.Data(data) =>
           let versionInfo = data##versionInfo;
           <>
             <Heading> "Core Build Date (Local time)"->string </Heading>
             <Text>
               {versionInfo.buildTime->Js.Date.toLocaleString->string}
             </Text>
             <Heading> "Core Build Version"->string </Heading>
             <Text> <pre> versionInfo.commitSha->string </pre> </Text>
             <Heading> "Core Build Branch"->string </Heading>
             <Text> <pre> versionInfo.branchName->string </pre> </Text>
           </>;
         | Error(_)
         | NotFound => <Text> "Could not connect to Core"->string </Text>
         | _ => null
         }}
      </div>;
    };
  };
};

[@react.component]
let make = () => {
  open ThemeNames;
  let request = Core.Queries.VersionInfo.make();
  let url = ReasonReactRouter.useUrl();
  let ({response}, _) = useQuery(~request, ());

  <Layouts.Global>
    <React.Suspense fallback=null>
      <Components.VersionInfoDisplay response />
      {switch (url.path) {
       | [] => <Pages.UnauthedHomeLazy.Lazy />
       | ["me", "settings"] =>
         <main>
           <Heading size=Heading.S900> "Howdy!"->str </Heading>
           <Router.Link path="/">
             <Text> "Back to /"->str </Text>
           </Router.Link>
         </main>
       | ["g"] =>
         // Redirect on /g
         ReasonReactRouter.replace("/");
         null;
       | ["g", id, ..._] => <Pages.GuildLazy.Lazy id />
       | _ => <Heading size=Heading.S900> "Not Found"->str </Heading>
       }}
    </React.Suspense>
  </Layouts.Global>;
};

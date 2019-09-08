open ReactUtils;
open AppStyles;
open GsUi;

[@react.component]
let make = () => {
  open ThemeNames;
  let url = ReasonReactRouter.useUrl();

  <Gql.Provider value=Gql.client>
    <Layouts.Global>
      <React.Suspense fallback=null>
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
    </Layouts.Global>
  </Gql.Provider>;
};

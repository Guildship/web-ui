open ReactUtils;
open AppStyles;
open SharedUiComponents;
open GuildshipUi;

[@react.component]
let make = () => {
  open ThemeNames;
  let url = ReasonReactRouter.useUrl();

  <Gql.Provider client=Gql.client>
    <Layouts.Global>
      <React.Suspense fallback=null>
        {switch (url.path) {
         | [] => <Pages.UnauthedHomeLazy.Lazy />
         | ["me", "settings"] =>
           <main>
             <Heading level=1> "Howdy!"->str </Heading>
             <Router.Link path="/">
               <Text> "Back to /"->str </Text>
             </Router.Link>
           </main>
         | _ => <Heading level=1> "Not Found"->str </Heading>
         }}
      </React.Suspense>
    </Layouts.Global>
  </Gql.Provider>;
};

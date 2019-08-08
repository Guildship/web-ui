open ReactUtils;
open AppStyles;

[@react.component]
let make = () => {
  open ThemeNames;
  let url = ReasonReactRouter.useUrl();

  <Gql.Provider client=Gql.client>
    <Layouts.Global>
      <React.Suspense fallback=null>
        {switch (url.path) {
         | [] => <Pages.UnauthedHome />
         | _ => null
         }}
      </React.Suspense>
    </Layouts.Global>
  </Gql.Provider>;
};

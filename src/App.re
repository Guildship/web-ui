open ReactUtils;
open AppStyles;

[@react.component]
let make = () => {
  open ThemeNames;
  let url = ReasonReactRouter.useUrl();

  <Gql.Provider client=Gql.client>
    <Layouts.Global>
      {switch (url.path) {
       | [] => <Pages.UnauthedHome />
       | _ => null
       }}
    </Layouts.Global>
  </Gql.Provider>;
};

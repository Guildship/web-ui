open ReactUtils;
open AppStyles;
open ReactUtils.Hooks;

[@react.component]
let make = () => {
  open ThemeNames;
  let {autoTheme} = useAutoTheme(false);
  let {theme} = useTheme(~auto=autoTheme);
  let url = ReasonReactRouter.useUrl();

  <ThemeContext value=theme>
    <Gql.Provider client=Gql.client>
      <Layouts.Global>
        {switch (url.path) {
         | [] => <Pages.UnauthedHome />
         | _ => null
         }}
      </Layouts.Global>
    </Gql.Provider>
  </ThemeContext>;
};

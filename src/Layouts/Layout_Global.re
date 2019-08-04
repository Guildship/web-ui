open ReactUtils;

[@react.component]
let make = (~children) => {
  let theme = useContext(AppStyles.ThemeContext.themeContext);

  module Styles = {
    open Css;
    open StyleUtils.CssUtils;

    let appContainer =
      style([
        flex(1.0->numFloat),
        backgroundColor(theme.colors.baseBackgroundColor),
        color(theme.colors.baseForegroundColor),
      ]);
  };

  <main className=Styles.appContainer> children </main>;
};

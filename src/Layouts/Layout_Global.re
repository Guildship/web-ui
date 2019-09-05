open AppStyles.ThemeStore;
open CustomHooks;

[@react.component]
let make = (~children) => {
  let ({theme}, _) = useTheme();

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

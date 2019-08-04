open ReactUtils;
open AppStyles;

[@react.component]
let make = () => {
  let theme = useContext(ThemeContext.themeContext);

  module Styles = {
    open Css;
    open Theme;
    open StyleUtils.CssUtils;

    let appContainer =
      style([
        flex(1.0->numFloat),
        backgroundColor(theme.colors.baseBackgroundColor),
        color(theme.colors.baseForegroundColor),
      ]);

    let heading =
      style([lineHeight(theme.typography.headingLineHeight->em)]);
    let baseTypography = style([margin2(~v=0.5->em, ~h=zero)]);

    let h1 =
      merge([
        heading,
        baseTypography,
        style([
          unsafe("fontSize", theme.typography.h1FontSize),
          fontWeight(`num(theme.typography.h1FontWeight)),
        ]),
      ]);
  };

  <main className=Styles.appContainer>
    <h1 className=Styles.h1> "Guildship"->str </h1>
  </main>;
};

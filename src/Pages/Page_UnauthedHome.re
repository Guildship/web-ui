open ReactUtils;
open AppStyles;
open Hooks;
open ThemeStore;

[@react.component]
let make = () => {
  let ({theme}, _) = useTheme();

  module Styles = {
    open Css;
    open Theme;

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

  <h1 className=Styles.h1> "Guildship"->str </h1>;
};

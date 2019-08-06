open ReactUtils;
open AppStyles;

[@react.component]
let make = () => {
  let (state, _) = Hooks.useTheme();

  module Styles = {
    open Css;
    open Theme;

    let heading =
      style([lineHeight(state.theme.typography.headingLineHeight->em)]);
    let baseTypography = style([margin2(~v=0.5->em, ~h=zero)]);

    let h1 =
      merge([
        heading,
        baseTypography,
        style([
          unsafe("fontSize", state.theme.typography.h1FontSize),
          fontWeight(`num(state.theme.typography.h1FontWeight)),
        ]),
      ]);
  };

  <h1 className=Styles.h1> "Guildship"->str </h1>;
};

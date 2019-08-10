open ReactUtils;
open AppStyles;
open Hooks;
open ThemeStore;
open SharedUiComponents;
open Router;

[@react.component]
let make = () => {
  let ({theme}, _) = useTheme();

  module Styles = {
    open Css;
    open Theme;

    let wrapper = style([padding2(~h=1.->rem, ~v=zero)]);

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

  <div className=Styles.wrapper>
    <h1 className=Styles.h1> "Guildship"->str </h1>
    <Link path="/me/settings"> "Go to settings"->str </Link>
    <Suspense fallback=null> <ThemePickerLazy.Lazy /> </Suspense>
  </div>;
};

let default = make;

open ReactUtils;
open Hooks;
open AppStyles.ThemeStore;

type size =
  | SM
  | MED
  | LG
  | XL;

[@react.component]
let make = (~size=MED, ~children=null) => {
  let ({theme}, _) = useTheme();

  module Style = {
    open Css;

    let makeStyle = (~fontSize, ~fontWeight, ~lineHeight, ~letterSpacing) =>
      style([
        fontFamily(theme.typography.uiFontFamily),
        color(theme.colors.baseForegroundColor),
        Css.margin(zero),
        Css.fontSize(fontSize),
        Css.fontWeight(fontWeight),
        Css.lineHeight(lineHeight),
        Css.letterSpacing(letterSpacing),
      ]);

    let smStyle =
      makeStyle(
        ~fontSize=12->px,
        ~fontWeight=`num(400),
        ~lineHeight=16->px,
        ~letterSpacing=zero,
      );

    let medStyle =
      makeStyle(
        ~fontSize=14->px,
        ~fontWeight=`num(400),
        ~lineHeight=20->px,
        ~letterSpacing=(-0.05)->pxFloat,
      );

    let lgStyle =
      makeStyle(
        ~fontSize=16->px,
        ~fontWeight=`num(400),
        ~lineHeight=20->px,
        ~letterSpacing=(-0.05)->pxFloat,
      );

    let xlStyle =
      makeStyle(
        ~fontSize=20->px,
        ~fontWeight=`num(400),
        ~lineHeight=24->px,
        ~letterSpacing=(-0.07)->pxFloat,
      );
  };

  let textStyle =
    switch (size) {
    | SM => Style.smStyle
    | MED => Style.medStyle
    | LG => Style.lgStyle
    | XL => Style.xlStyle
    };

  <span className=textStyle> children </span>;
};

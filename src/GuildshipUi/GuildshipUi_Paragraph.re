open ReactUtils;
open Hooks;
open AppStyles.ThemeStore;

type size =
  | SM
  | MED
  | LG;

[@react.component]
let make = (~size=MED, ~children=null) => {
  let ({theme}, _) = useTheme();

  module Style = {
    open Css;

    let makeStyle =
        (~fontSize, ~fontWeight, ~lineHeight, ~letterSpacing, ~marginTop) =>
      style([
        color(theme.colors.baseForegroundColor),
        Css.margin(zero),
        Css.fontSize(fontSize),
        Css.fontWeight(fontWeight),
        Css.lineHeight(lineHeight),
        Css.letterSpacing(letterSpacing),
        Css.marginTop(marginTop),
      ]);

    let smStyle =
      makeStyle(
        ~fontSize=12->px,
        ~fontWeight=`num(400),
        ~lineHeight=16->px,
        ~letterSpacing=zero,
        ~marginTop=12->px,
      );

    let medStyle =
      makeStyle(
        ~fontSize=14->px,
        ~fontWeight=`num(400),
        ~lineHeight=20->px,
        ~letterSpacing=(-0.05)->pxFloat,
        ~marginTop=12->px,
      );

    let lgStyle =
      makeStyle(
        ~fontSize=16->px,
        ~fontWeight=`num(400),
        ~lineHeight=20->px,
        ~letterSpacing=(-0.05)->pxFloat,
        ~marginTop=16->px,
      );
  };

  let textStyle =
    switch (size) {
    | SM => Style.smStyle
    | MED => Style.medStyle
    | LG => Style.lgStyle
    };

  <p className=textStyle> children </p>;
};

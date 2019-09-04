open ReactUtils;
open Hooks;
open AppStyles;
open ThemeStore;

type size =
  | S100
  | S200
  | S300
  | S400
  | S500
  | S600
  | S700
  | S800
  | S900;

[@react.component]
let make = (~level=?, ~size=S500, ~children) => {
  let _size = size;
  let ({theme}, _) = useTheme();

  module Styles = {
    open Css;
    open Theme;

    let baseHeadingStyle = style([margin(zero)]);

    let headingFontFamily =
      switch (_size) {
      | S100 => theme.typography.uiFontFamily
      | S200 => theme.typography.uiFontFamily
      | S300 => theme.typography.uiFontFamily
      | S400 => theme.typography.uiFontFamily
      | S500 => theme.typography.uiFontFamily
      | S600 => theme.typography.displayFontFamily
      | S700 => theme.typography.displayFontFamily
      | S800 => theme.typography.displayFontFamily
      | S900 => theme.typography.displayFontFamily
      };

    let headingFontSize =
      switch (_size) {
      | S100 => 11->px
      | S200 => 12->px
      | S300 => 12->px
      | S400 => 14->px
      | S500 => 16->px
      | S600 => 20->px
      | S700 => 24->px
      | S800 => 29->px
      | S900 => 35->px
      };

    let headingFontWeight =
      switch (_size) {
      | S100 => `num(400)
      | S200 => `num(600)
      | S300 => `num(600)
      | S400 => `num(600)
      | S500 => `num(500)
      | S600 => `num(500)
      | S700 => `num(500)
      | S800 => `num(500)
      | S900 => `num(500)
      };

    let headingLineHeight =
      switch (_size) {
      | S100 => 16->px
      | S200 => 16->px
      | S300 => 16->px
      | S400 => 20->px
      | S500 => 20->px
      | S600 => 24->px
      | S700 => 28->px
      | S800 => 32->px
      | S900 => 40->px
      };

    let headingLetterSpacing =
      switch (_size) {
      | S100 => 0.->pxFloat
      | S200 => zero
      | S300 => zero
      | S400 => (-0.05)->pxFloat
      | S500 => (-0.05)->pxFloat
      | S600 => (-0.07)->pxFloat
      | S700 => (-0.07)->pxFloat
      | S800 => (-0.02)->pxFloat
      | S900 => (-0.2)->pxFloat
      };

    let headingColor = theme.colors.baseForegroundColor;

    let headingStyle =
      merge([
        baseHeadingStyle,
        style([
          fontFamily(headingFontFamily),
          fontSize(headingFontSize),
          fontWeight(headingFontWeight),
          lineHeight(headingLineHeight),
          letterSpacing(headingLetterSpacing),
          color(headingColor),
        ]),
      ]);
  };

  switch (level) {
  | Some(1) => <h1 className=Styles.headingStyle> children </h1>
  | Some(2) => <h2 className=Styles.headingStyle> children </h2>
  | Some(3) => <h3 className=Styles.headingStyle> children </h3>
  | Some(4) => <h4 className=Styles.headingStyle> children </h4>
  | Some(5) => <h5 className=Styles.headingStyle> children </h5>
  | Some(6) => <h6 className=Styles.headingStyle> children </h6>
  | _ => <h2 className=Styles.headingStyle> children </h2>
  };
};

open ReactUtils;
open CustomHooks;
open AppStyles.ThemeNames;
open AppStyles.ThemeStore;
open AppStyles.Theme.Colors;

[@react.component]
let make = () => {
  let ({theme, themeName}, switchTheme) = useTheme();

  module Styles = {
    open Css;
    open AppStyles;
    open Theme;

    let {cardBorderColorStr} = theme.colors;

    let wrapper =
      style([
        display(inlineBlock),
        borderRadius(theme.sizing.borderRadius->px),
        unsafe(
          "boxShadow",
          {j|0 0 0 1px $cardBorderColorStr, 0 0.25rem 0.25rem rgba(0, 0, 0, 0.05)|j},
        ),
      ]);

    let button =
      style([
        height(3.->rem),
        width(8.->rem),
        border(zero, none, transparent),
        fontSize(1.->rem),
        borderRadius(zero),
        backgroundColor(theme.colors.cardBackgroundColor),
        color(theme.colors.cardForegroundColor),
        textTransform(capitalize),
        selector(
          ":disabled",
          [color(Palette.gsGray0), backgroundColor(Palette.gsBase)],
        ),
        selector(
          ":first-of-type",
          [
            borderTopLeftRadius(theme.sizing.borderRadius->px),
            borderBottomLeftRadius(theme.sizing.borderRadius->px),
          ],
        ),
        selector(
          ":last-child",
          [
            borderTopRightRadius(theme.sizing.borderRadius->px),
            borderBottomRightRadius(theme.sizing.borderRadius->px),
          ],
        ),
      ]);
  };

  let switchToDarkTheme = () => switchTheme(Dark);
  let switchToLightTheme = () => switchTheme(Light);
  let switchToAutoTheme = () => switchTheme(Auto);

  <div className=Styles.wrapper>
    <button
      className=Styles.button
      onClick={_ => switchToDarkTheme()}
      disabled={themeName == Dark}>
      {Dark->toString->string}
    </button>
    <button
      className=Styles.button
      onClick={_ => switchToLightTheme()}
      disabled={themeName == Light}>
      {Light->toString->string}
    </button>
    <button
      className=Styles.button
      onClick={_ => switchToAutoTheme()}
      disabled={themeName == Auto}>
      {Auto->toString->string}
    </button>
  </div>;
};

let default = make;

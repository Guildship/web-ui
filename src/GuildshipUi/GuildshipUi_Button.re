open Utils;
open ReactUtils;
open AppStyles.ThemeStore;
open Hooks;
open StyleUtils;

type appearance =
  | Primary
  | Default
  | Minimal;

[@react.component]
let make =
    (
      ~intent=Intent.None,
      ~appearance=Default,
      ~children=null,
      ~className="",
      ~height as _height=32,
      ~marginTop as mt=0,
      ~marginRight as mr=0,
      ~marginLeft as ml=0,
      ~marginBottom as mb=0,
      ~onClick=noop1,
    ) => {
  let ({theme}, _) = useTheme();
  module Styles = {
    open Css;

    let focusRing =
      AppStyles.Palette.gsBaseStr->StyleUtils.Color.transparentize(0.66);
    let focusRingShadow = CssUtils.unsafeShadow({j|0 0 0 3px $(focusRing)|j});

    let base =
      style([
        fontSize(12->px),
        display(inlineFlex),
        borderRadius(theme.sizing.borderRadius->px),
        border(zero, none, transparent),
        height(_height->px),
        lineHeight(_height->px),
        alignItems(center),
        justifyContent(center),
        margin4(~top=mt->px, ~bottom=mb->px, ~left=ml->px, ~right=mr->px),
        padding2(~v=zero, ~h=16->px),
        selector(
          "&:not([disabled]):not([data-disabled]):hover",
          [cursor(`pointer)],
        ),
        selector(
          "&:not([disabled]):not([data-disabled]):focus",
          [zIndex(2), outline(zero, none, transparent), focusRingShadow],
        ),
      ]);

    let defaultStyle =
      style([
        color(theme.colors.baseForegroundColor),
        backgroundImage(
          linearGradient(
            180.->deg,
            [
              (0.->pct, theme.colors.buttonDefaultBackgroundColor),
              (100.->pct, theme.colors.buttonDefaultGradientShadowColor),
            ],
          ),
        ),
        boxShadow(
          ~x=zero,
          ~y=zero,
          ~blur=zero,
          ~spread=1->px,
          ~inset=true,
          theme.colors.buttonBorderColor,
        ),
        selector(
          ":not([disabled]):not([data-disabled]):active",
          [
            backgroundImage(
              linearGradient(
                180.->deg,
                [
                  (0.->pct, theme.colors.buttonDefaultGradientShadowColor),
                  (100.->pct, theme.colors.buttonDefaultBackgroundColor),
                ],
              ),
            ),
          ],
        ),
        selector(
          ":not([disabled]):not([data-disabled]):focus",
          [
            boxShadows([
              focusRingShadow,
              boxShadow(
                ~x=zero,
                ~y=zero,
                ~blur=zero,
                ~spread=1->px,
                ~inset=true,
                theme.colors.buttonBorderColor,
              ),
            ]),
          ],
        ),
      ]);

    let appearanceStyle =
      switch (appearance) {
      | Default => defaultStyle
      | Primary =>
        open AppStyles.Palette;

        let gradient =
          switch (intent) {
          | Intent.None => [(0.->pct, gsBlue5), (100.->pct, gsBlue6)]
          | Intent.Success => [(0.->pct, gsCyan7), (100.->pct, gsCyan8)]
          | Intent.Warning => [(0.->pct, gsOrange5), (100.->pct, gsOrange6)]
          | Intent.Danger => [(0.->pct, gsRed5), (100.->pct, gsRed6)]
          };

        merge([
          defaultStyle,
          style([
            backgroundImage(linearGradient(180.->deg, gradient)),
            selector(
              ":not([disabled]):not([data-disabled]):active",
              [backgroundImage(linearGradient(0.->deg, gradient))],
            ),
          ]),
        ]);
      | Minimal =>
        style([
          backgroundColor(transparent),
          selector(
            ":not([disabled]):not([data-disabled]):hover",
            [backgroundColor(theme.colors.buttonMinimalHoverColor)],
          ),
          selector(
            ":not([disabled]):not([data-disabled]):active",
            [backgroundColor(theme.colors.buttonMinimalActiveColor)],
          ),
        ])
      };

    let overrideStyles =
      switch (appearance, intent) {
      | (Primary, _) => style([color(white)])
      | (Default, Intent.None) =>
        style([color(theme.colors.baseForegroundColor)])
      | (_, Intent.None) => style([color(AppStyles.Palette.gsBlue7)])
      | (_, Intent.Success) => style([color(AppStyles.Palette.gsCyan9)])
      | (_, Intent.Warning) => style([color(AppStyles.Palette.gsOrange7)])
      | (_, Intent.Danger) => style([color(AppStyles.Palette.gsRed7)])
      };

    let buttonStyle = merge([base, appearanceStyle, overrideStyles]);
  };

  <button className={classNames([|Styles.buttonStyle, className|])} onClick>
    children
  </button>;
};

open Utils;
open ReactUtils;
open Hooks;
open AppStyles;
open Theme;
open ThemeStore;

[@react.component]
let make = (~elevation=?, ~className="", ~children=null) => {
  let ({theme}, _) = useTheme();

  module Styles = {
    open Css;

    let elevationBaseShadow =
      boxShadow(
        ~x=zero,
        ~y=zero,
        ~blur=zero,
        ~spread=1->px,
        theme.colors.cardBorderColor,
      );

    let getElevation = elevation =>
      switch (elevation) {
      | Elevation0 => elevationBaseShadow
      | Elevation1 =>
        boxShadows([
          elevationBaseShadow,
          boxShadow(
            ~x=zero,
            ~y=2->px,
            ~blur=4->px,
            ~spread=(-2)->px,
            theme.colors.paneShadowColor,
          ),
        ])
      | Elevation2 =>
        boxShadows([
          elevationBaseShadow,
          boxShadow(
            ~x=zero,
            ~y=5->px,
            ~blur=8->px,
            ~spread=(-4)->px,
            theme.colors.paneShadowColor,
          ),
        ])
      | Elevation3 =>
        boxShadows([
          elevationBaseShadow,
          boxShadow(
            ~x=zero,
            ~y=8->px,
            ~blur=10->px,
            ~spread=(-4)->px,
            theme.colors.paneShadowColor,
          ),
        ])
      | Elevation4 =>
        boxShadows([
          elevationBaseShadow,
          boxShadow(
            ~x=zero,
            ~y=16->px,
            ~blur=24->px,
            ~spread=(-8)->px,
            theme.colors.paneShadowColor,
          ),
        ])
      };

    let paneWrapper =
      elevation
      ->Option.map(el => style([getElevation(el)]))
      ->Option.getWithDefault("");
  };

  <div className={classNames([|Styles.paneWrapper, className|])}>
    children
  </div>;
};

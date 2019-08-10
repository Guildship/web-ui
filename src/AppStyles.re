open StyleUtils;

module Palette = {
  open Css;

  let gsBaseStr = "#09f";
  let gsBase = "09f"->hex;
  let gsBlackStr = "#374046";
  let gsBlack = "374046"->hex;
  let gsGray0Str = "#f8f9f9";
  let gsGray0 = "f8f9f9"->hex;
  let gsGray1Str = "#ebedef";
  let gsGray1 = "ebedef"->hex;
  let gsGray2Str = "#dce1e4";
  let gsGray2 = "dce1e4"->hex;
  let gsGray3Str = "#cdd3d8";
  let gsGray3 = "cdd3d8"->hex;
  let gsGray4Str = "#bcc5ca";
  let gsGray4 = "bcc5ca"->hex;
  let gsGray5Str = "#a9b4bb";
  let gsGray5 = "a9b4bb"->hex;
  let gsGray6Str = "#93a1aa";
  let gsGray6 = "93a1aa"->hex;
  let gsGray7Str = "#798b96";
  let gsGray7 = "798b96"->hex;
  let gsGray8Str = "#5e6e78";
  let gsGray8 = "5e6e78"->hex;
  let gsGray9Str = "#374046";
  let gsGray9 = "374046"->hex;
  let gsBlue0Str = "#e3f4ff";
  let gsBlue0 = "e3f4ff"->hex;
  let gsBlue1Str = "#c4e7ff";
  let gsBlue1 = "c4e7ff"->hex;
  let gsBlue2Str = "#a2d9ff";
  let gsBlue2 = "a2d9ff"->hex;
  let gsBlue3Str = "#79c9ff";
  let gsBlue3 = "79c9ff"->hex;
  let gsBlue4Str = "#46b5ff";
  let gsBlue4 = "46b5ff"->hex;
  let gsBlue5Str = "#0099ff";
  let gsBlue5 = "0099ff"->hex;
  let gsBlue6Str = "#008ae6";
  let gsBlue6 = "008ae6"->hex;
  let gsBlue7Str = "#0079ca";
  let gsBlue7 = "0079ca"->hex;
  let gsBlue8Str = "#0064a7";
  let gsBlue8 = "0064a7"->hex;
  let gsBlue9Str = "#004878";
  let gsBlue9 = "004878"->hex;
  let gsIndigo0Str = "#e9ebff";
  let gsIndigo0 = "e9ebff"->hex;
  let gsIndigo1Str = "#d2d6ff";
  let gsIndigo1 = "d2d6ff"->hex;
  let gsIndigo2Str = "#b6bdff";
  let gsIndigo2 = "b6bdff"->hex;
  let gsIndigo3Str = "#959fff";
  let gsIndigo3 = "959fff"->hex;
  let gsIndigo4Str = "#6776ff";
  let gsIndigo4 = "6776ff"->hex;
  let gsIndigo5Str = "#0019ff";
  let gsIndigo5 = "0019ff"->hex;
  let gsIndigo6Str = "#0016e6";
  let gsIndigo6 = "0016e6"->hex;
  let gsIndigo7Str = "#0013c9";
  let gsIndigo7 = "0013c9"->hex;
  let gsIndigo8Str = "#0010a6";
  let gsIndigo8 = "0010a6"->hex;
  let gsIndigo9Str = "#000b76";
  let gsIndigo9 = "000b76"->hex;
  let gsViolet0Str = "#f2e9ff";
  let gsViolet0 = "f2e9ff"->hex;
  let gsViolet1Str = "#e4d2ff";
  let gsViolet1 = "e4d2ff"->hex;
  let gsViolet2Str = "#d3b6ff";
  let gsViolet2 = "d3b6ff"->hex;
  let gsViolet3Str = "#bf95ff";
  let gsViolet3 = "bf95ff"->hex;
  let gsViolet4Str = "#a467ff";
  let gsViolet4 = "a467ff"->hex;
  let gsViolet5Str = "#6600ff";
  let gsViolet5 = "6600ff"->hex;
  let gsViolet6Str = "#5c00e6";
  let gsViolet6 = "5c00e6"->hex;
  let gsViolet7Str = "#5000ca";
  let gsViolet7 = "5000ca"->hex;
  let gsViolet8Str = "#4300a7";
  let gsViolet8 = "4300a7"->hex;
  let gsViolet9Str = "#300078";
  let gsViolet9 = "300078"->hex;
  let gsFuschia0Str = "#fceaff";
  let gsFuschia0 = "fceaff"->hex;
  let gsFuschia1Str = "#fad3ff";
  let gsFuschia1 = "fad3ff"->hex;
  let gsFuschia2Str = "#f7b9ff";
  let gsFuschia2 = "f7b9ff"->hex;
  let gsFuschia3Str = "#f498ff";
  let gsFuschia3 = "f498ff"->hex;
  let gsFuschia4Str = "#f06cff";
  let gsFuschia4 = "f06cff"->hex;
  let gsFuschia5Str = "#e500ff";
  let gsFuschia5 = "e500ff"->hex;
  let gsFuschia6Str = "#cf00e7";
  let gsFuschia6 = "cf00e7"->hex;
  let gsFuschia7Str = "#b600cb";
  let gsFuschia7 = "b600cb"->hex;
  let gsFuschia8Str = "#9800a9";
  let gsFuschia8 = "9800a9"->hex;
  let gsFuschia9Str = "#6e007b";
  let gsFuschia9 = "6e007b"->hex;
  let gsPink0Str = "#ffeaf6";
  let gsPink0 = "ffeaf6"->hex;
  let gsPink1Str = "#ffd4ed";
  let gsPink1 = "ffd4ed"->hex;
  let gsPink2Str = "#ffb9e3";
  let gsPink2 = "ffb9e3"->hex;
  let gsPink3Str = "#ff99d6";
  let gsPink3 = "ff99d6"->hex;
  let gsPink4Str = "#ff6dc4";
  let gsPink4 = "ff6dc4"->hex;
  let gsPink5Str = "#ff0099";
  let gsPink5 = "ff0099"->hex;
  let gsPink6Str = "#e7008a";
  let gsPink6 = "e7008a"->hex;
  let gsPink7Str = "#cb0079";
  let gsPink7 = "cb0079"->hex;
  let gsPink8Str = "#a90065";
  let gsPink8 = "a90065"->hex;
  let gsPink9Str = "#7b0049";
  let gsPink9 = "7b0049"->hex;
  let gsRed0Str = "#ffebed";
  let gsRed0 = "ffebed"->hex;
  let gsRed1Str = "#ffd4d9";
  let gsRed1 = "ffd4d9"->hex;
  let gsRed2Str = "#ffbac1";
  let gsRed2 = "ffbac1"->hex;
  let gsRed3Str = "#ff9ba5";
  let gsRed3 = "ff9ba5"->hex;
  let gsRed4Str = "#ff707e";
  let gsRed4 = "ff707e"->hex;
  let gsRed5Str = "#ff001a";
  let gsRed5 = "ff001a"->hex;
  let gsRed6Str = "#e70017";
  let gsRed6 = "e70017"->hex;
  let gsRed7Str = "#cb0014";
  let gsRed7 = "cb0014"->hex;
  let gsRed8Str = "#a90011";
  let gsRed8 = "a90011"->hex;
  let gsRed9Str = "#7b000c";
  let gsRed9 = "7b000c"->hex;
  let gsOrange0Str = "#ffeee3";
  let gsOrange0 = "ffeee3"->hex;
  let gsOrange1Str = "#ffdcc5";
  let gsOrange1 = "ffdcc5"->hex;
  let gsOrange2Str = "#ffc8a3";
  let gsOrange2 = "ffc8a3"->hex;
  let gsOrange3Str = "#ffb07b";
  let gsOrange3 = "ffb07b"->hex;
  let gsOrange4Str = "#ff9149";
  let gsOrange4 = "ff9149"->hex;
  let gsOrange5Str = "#ff6600";
  let gsOrange5 = "ff6600"->hex;
  let gsOrange6Str = "#e65c00";
  let gsOrange6 = "e65c00"->hex;
  let gsOrange7Str = "#ca5000";
  let gsOrange7 = "ca5000"->hex;
  let gsOrange8Str = "#a74300";
  let gsOrange8 = "a74300"->hex;
  let gsOrange9Str = "#783000";
  let gsOrange9 = "783000"->hex;
  let gsYellow0Str = "#fffbe0";
  let gsYellow0 = "fffbe0"->hex;
  let gsYellow1Str = "#fff8be";
  let gsYellow1 = "fff8be"->hex;
  let gsYellow2Str = "#fff499";
  let gsYellow2 = "fff499"->hex;
  let gsYellow3Str = "#fff06e";
  let gsYellow3 = "fff06e"->hex;
  let gsYellow4Str = "#ffeb3c";
  let gsYellow4 = "ffeb3c"->hex;
  let gsYellow5Str = "#ffe500";
  let gsYellow5 = "ffe500"->hex;
  let gsYellow6Str = "#e7cf00";
  let gsYellow6 = "e7cf00"->hex;
  let gsYellow7Str = "#cbb600";
  let gsYellow7 = "cbb600"->hex;
  let gsYellow8Str = "#a99700";
  let gsYellow8 = "a99700"->hex;
  let gsYellow9Str = "#7a6e00";
  let gsYellow9 = "7a6e00"->hex;
  let gsLime0Str = "#f4ffe3";
  let gsLime0 = "f4ffe3"->hex;
  let gsLime1Str = "#e8ffc5";
  let gsLime1 = "e8ffc5"->hex;
  let gsLime2Str = "#daffa3";
  let gsLime2 = "daffa3"->hex;
  let gsLime3Str = "#caff7a";
  let gsLime3 = "caff7a"->hex;
  let gsLime4Str = "#b5ff48";
  let gsLime4 = "b5ff48"->hex;
  let gsLime5Str = "#99ff00";
  let gsLime5 = "99ff00"->hex;
  let gsLime6Str = "#8ae700";
  let gsLime6 = "8ae700"->hex;
  let gsLime7Str = "#79cb00";
  let gsLime7 = "79cb00"->hex;
  let gsLime8Str = "#65a900";
  let gsLime8 = "65a900"->hex;
  let gsLime9Str = "#497b00";
  let gsLime9 = "497b00"->hex;
  let gsGreen0Str = "#ecffe9";
  let gsGreen0 = "ecffe9"->hex;
  let gsGreen1Str = "#d6ffd2";
  let gsGreen1 = "d6ffd2"->hex;
  let gsGreen2Str = "#bdffb6";
  let gsGreen2 = "bdffb6"->hex;
  let gsGreen3Str = "#9fff95";
  let gsGreen3 = "9fff95"->hex;
  let gsGreen4Str = "#77ff67";
  let gsGreen4 = "77ff67"->hex;
  let gsGreen5Str = "#1aff00";
  let gsGreen5 = "1aff00"->hex;
  let gsGreen6Str = "#17e700";
  let gsGreen6 = "17e700"->hex;
  let gsGreen7Str = "#14cb00";
  let gsGreen7 = "14cb00"->hex;
  let gsGreen8Str = "#11a900";
  let gsGreen8 = "11a900"->hex;
  let gsGreen9Str = "#0c7b00";
  let gsGreen9 = "0c7b00"->hex;
  let gsTeal0Str = "#e9fff2";
  let gsTeal0 = "e9fff2"->hex;
  let gsTeal1Str = "#d2ffe4";
  let gsTeal1 = "d2ffe4"->hex;
  let gsTeal2Str = "#b6ffd3";
  let gsTeal2 = "b6ffd3"->hex;
  let gsTeal3Str = "#94ffbf";
  let gsTeal3 = "94ffbf"->hex;
  let gsTeal4Str = "#66ffa3";
  let gsTeal4 = "66ffa3"->hex;
  let gsTeal5Str = "#00ff66";
  let gsTeal5 = "00ff66"->hex;
  let gsTeal6Str = "#00e75c";
  let gsTeal6 = "00e75c"->hex;
  let gsTeal7Str = "#00cb51";
  let gsTeal7 = "00cb51"->hex;
  let gsTeal8Str = "#00a943";
  let gsTeal8 = "00a943"->hex;
  let gsTeal9Str = "#007b31";
  let gsTeal9 = "007b31"->hex;
  let gsCyan0Str = "#eafffc";
  let gsCyan0 = "eafffc"->hex;
  let gsCyan1Str = "#d3fffa";
  let gsCyan1 = "d3fffa"->hex;
  let gsCyan2Str = "#b8fff8";
  let gsCyan2 = "b8fff8"->hex;
  let gsCyan3Str = "#98fff4";
  let gsCyan3 = "98fff4"->hex;
  let gsCyan4Str = "#6bfff0";
  let gsCyan4 = "6bfff0"->hex;
  let gsCyan5Str = "#00ffe6";
  let gsCyan5 = "00ffe6"->hex;
  let gsCyan6Str = "#00e7d0";
  let gsCyan6 = "00e7d0"->hex;
  let gsCyan7Str = "#00cbb7";
  let gsCyan7 = "00cbb7"->hex;
  let gsCyan8Str = "#00a998";
  let gsCyan8 = "00a998"->hex;
  let gsCyan9Str = "#007b6f";
  let gsCyan9 = "007b6f"->hex;
};

module Theme = {
  open Css;

  module Typography = {
    type t = {
      // Font Size (in pixels)
      baseFontSize: string,
      h1FontSize: string,
      h2FontSize: string,
      h3FontSize: string,
      h4FontSize: string,
      h5FontSize: string,
      h6FontSize: string,
      // Font Weight
      baseFontWeight: int,
      h1FontWeight: int,
      h2FontWeight: int,
      h3FontWeight: int,
      h4FontWeight: int,
      h5FontWeight: int,
      h6FontWeight: int,
      // Margins
      baseFontMargin: Css.length,
      headingFontMargin: Css.length,
      // Line Heights
      baseLineHeight: float,
      headingLineHeight: float,
    };
  };

  module Colors = {
    type t = {
      baseBackgroundColor: color,
      baseBackgroundColorStr: string,
      baseForegroundColor: color,
      baseForegroundColorStr: string,
      cardBackgroundColor: color,
      cardBackgroundColorStr: string,
      cardForegroundColor: color,
      cardForegroundColorStr: string,
      cardBorderColor: color,
      cardBorderColorStr: string,
      paneShadowColor: color,
      paneShadowColorStr: string,
      baseLinkColor: color,
      baseLinkColorStr: string,
      visitedLinkColor: color,
      visitedLinkColorStr: string,
      activeLinkColor: color,
      activeLinkColorStr: string,
    };
  };

  type t = {
    typography: Typography.t,
    colors: Colors.t,
  };

  let baseFontSize = 18;

  let typography: Typography.t = {
    baseFontSize: ModularScale.get(1),
    h1FontSize: ModularScale.get(7),
    h2FontSize: ModularScale.get(6),
    h3FontSize: ModularScale.get(5),
    h4FontSize: ModularScale.get(4),
    h5FontSize: ModularScale.get(3),
    h6FontSize: ModularScale.get(2),
    baseFontWeight: 400,
    h1FontWeight: 900,
    h2FontWeight: 300,
    h3FontWeight: 700,
    h4FontWeight: 700,
    h5FontWeight: 500,
    h6FontWeight: 300,
    baseFontMargin: 1.0->Css.em,
    headingFontMargin: 1.0->Css.em,
    baseLineHeight: 1.5,
    headingLineHeight: 1.5,
  };

  let paneShadowColor = rgba(0, 0, 0, 0.2);
  let paneShadowColorStr = "rgba(0, 0, 0, 0.2)";

  let darkTheme = {
    typography,
    colors: {
      baseBackgroundColor: Palette.gsBlack,
      baseBackgroundColorStr: Palette.gsBlackStr,
      baseForegroundColor: Palette.gsGray0,
      baseForegroundColorStr: Palette.gsGray0Str,
      cardBackgroundColor: Palette.gsGray8,
      cardBackgroundColorStr: Palette.gsGray8Str,
      cardForegroundColor: Palette.gsGray0,
      cardForegroundColorStr: Palette.gsGray0Str,
      cardBorderColor: rgba(0, 0, 0, 0.33),
      cardBorderColorStr: "rgba(0, 0, 0, 0.33)",
      paneShadowColor,
      paneShadowColorStr,
      baseLinkColor: Palette.gsBlue4,
      baseLinkColorStr: Palette.gsBlue4Str,
      visitedLinkColor: Palette.gsViolet4,
      visitedLinkColorStr: Palette.gsViolet4Str,
      activeLinkColor: Palette.gsRed4,
      activeLinkColorStr: Palette.gsRed4Str,
    },
  };

  let lightTheme = {
    typography,
    colors: {
      baseBackgroundColor: Palette.gsGray0,
      baseBackgroundColorStr: Palette.gsGray0Str,
      baseForegroundColor: Palette.gsGray9,
      baseForegroundColorStr: Palette.gsGray9Str,
      cardBackgroundColor: Css.white,
      cardBackgroundColorStr: "#fff",
      cardForegroundColor: Palette.gsBlack,
      cardBorderColor: rgba(0, 0, 0, 0.15),
      cardBorderColorStr: "rgba(0, 0, 0, 0.15)",
      cardForegroundColorStr: Palette.gsBlackStr,
      paneShadowColor,
      paneShadowColorStr,
      baseLinkColor: Palette.gsBlue5,
      baseLinkColorStr: Palette.gsBlue5Str,
      visitedLinkColor: Palette.gsViolet5,
      visitedLinkColorStr: Palette.gsViolet5Str,
      activeLinkColor: Palette.gsRed5,
      activeLinkColorStr: Palette.gsRed5Str,
    },
  };

  let default = darkTheme;

  type elevation =
    | Elevation0
    | Elevation1
    | Elevation2
    | Elevation3
    | Elevation4;
};

module ThemeNames = {
  type t =
    | Light
    | Dark
    | Auto;

  let default = Dark;

  let fromString =
    fun
    | "light" => Some(Light)
    | "dark" => Some(Dark)
    | "auto" => Some(Auto)
    | _ => None;

  let toString =
    fun
    | Light => "light"
    | Dark => "dark"
    | Auto => "auto";
};

module ThemeStore = {
  open Dom.Storage;
  open ThemeNames;
  open Utils;
  open DomUtils;

  let supportsDark = matchMedia("(prefers-color-scheme: dark)")->matches;
  let supportsLight = matchMedia("(prefers-color-scheme: light)")->matches;
  let supportsNoPreferences =
    matchMedia("(prefers-color-scheme: no-preference)")->matches;

  let canAutoTheme = supportsDark || supportsLight || supportsNoPreferences;

  let prefersDarkMode = supportsDark == true;

  let systemTheme =
    switch (canAutoTheme) {
    | false => ThemeNames.default
    | _ => prefersDarkMode ? Dark : Light
    };

  let storedTheme = localStorage |> getItem("theme");
  let initialThemeName =
    Option.(storedTheme->flatMap(fromString)->getWithDefault(systemTheme));

  type state = {
    themeName: ThemeNames.t,
    theme: Theme.t,
  };

  type action =
    | SwitchToDarkTheme
    | SwitchToLightTheme
    | SwitchToAutoTheme
    | AutoSwitchToDark
    | AutoSwitchToLight;

  let initialState =
    switch (systemTheme, initialThemeName) {
    | (Light, Auto) => {theme: Theme.lightTheme, themeName: Auto}
    | (Dark, Auto) => {theme: Theme.darkTheme, themeName: Auto}
    | (_, Dark) => {theme: Theme.darkTheme, themeName: Dark}
    | (_, Light) => {theme: Theme.lightTheme, themeName: Light}
    | _ => {theme: Theme.default, themeName: default}
    };

  let reducer = (state, action) =>
    switch (action) {
    | SwitchToDarkTheme => {
        themeName: ThemeNames.Dark,
        theme: Theme.darkTheme,
      }
    | SwitchToLightTheme => {
        themeName: ThemeNames.Light,
        theme: Theme.lightTheme,
      }
    | SwitchToAutoTheme => {...state, themeName: ThemeNames.Auto}
    | AutoSwitchToDark => {themeName: ThemeNames.Auto, theme: Theme.darkTheme}
    | AutoSwitchToLight => {
        themeName: ThemeNames.Auto,
        theme: Theme.lightTheme,
      }
    };

  let store = Restorative.createStore(initialState, reducer);
};

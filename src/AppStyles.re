open StyleUtils;

module Palette = {
  open Css;

  let gsBase = "09f"->hex;
  let gsBlack = "374046"->hex;
  let gsGray0 = "f8f9f9"->hex;
  let gsGray1 = "ebedef"->hex;
  let gsGray2 = "dce1e4"->hex;
  let gsGray3 = "cdd3d8"->hex;
  let gsGray4 = "bcc5ca"->hex;
  let gsGray5 = "a9b4bb"->hex;
  let gsGray6 = "93a1aa"->hex;
  let gsGray7 = "798b96"->hex;
  let gsGray8 = "5e6e78"->hex;
  let gsGray9 = "374046"->hex;
  let gsBlue0 = "e3f4ff"->hex;
  let gsBlue1 = "c4e7ff"->hex;
  let gsBlue2 = "a2d9ff"->hex;
  let gsBlue3 = "79c9ff"->hex;
  let gsBlue4 = "46b5ff"->hex;
  let gsBlue5 = "0099ff"->hex;
  let gsBlue6 = "008ae6"->hex;
  let gsBlue7 = "0079ca"->hex;
  let gsBlue8 = "0064a7"->hex;
  let gsBlue9 = "004878"->hex;
  let gsIndigo0 = "e9ebff"->hex;
  let gsIndigo1 = "d2d6ff"->hex;
  let gsIndigo2 = "b6bdff"->hex;
  let gsIndigo3 = "959fff"->hex;
  let gsIndigo4 = "6776ff"->hex;
  let gsIndigo5 = "0019ff"->hex;
  let gsIndigo6 = "0016e6"->hex;
  let gsIndigo7 = "0013c9"->hex;
  let gsIndigo8 = "0010a6"->hex;
  let gsIndigo9 = "000b76"->hex;
  let gsViolet0 = "f2e9ff"->hex;
  let gsViolet1 = "e4d2ff"->hex;
  let gsViolet2 = "d3b6ff"->hex;
  let gsViolet3 = "bf95ff"->hex;
  let gsViolet4 = "a467ff"->hex;
  let gsViolet5 = "6600ff"->hex;
  let gsViolet6 = "5c00e6"->hex;
  let gsViolet7 = "5000ca"->hex;
  let gsViolet8 = "4300a7"->hex;
  let gsViolet9 = "300078"->hex;
  let gsFuschia0 = "fceaff"->hex;
  let gsFuschia1 = "fad3ff"->hex;
  let gsFuschia2 = "f7b9ff"->hex;
  let gsFuschia3 = "f498ff"->hex;
  let gsFuschia4 = "f06cff"->hex;
  let gsFuschia5 = "e500ff"->hex;
  let gsFuschia6 = "cf00e7"->hex;
  let gsFuschia7 = "b600cb"->hex;
  let gsFuschia8 = "9800a9"->hex;
  let gsFuschia9 = "6e007b"->hex;
  let gsPink0 = "ffeaf6"->hex;
  let gsPink1 = "ffd4ed"->hex;
  let gsPink2 = "ffb9e3"->hex;
  let gsPink3 = "ff99d6"->hex;
  let gsPink4 = "ff6dc4"->hex;
  let gsPink5 = "ff0099"->hex;
  let gsPink6 = "e7008a"->hex;
  let gsPink7 = "cb0079"->hex;
  let gsPink8 = "a90065"->hex;
  let gsPink9 = "7b0049"->hex;
  let gsRed0 = "ffebed"->hex;
  let gsRed1 = "ffd4d9"->hex;
  let gsRed2 = "ffbac1"->hex;
  let gsRed3 = "ff9ba5"->hex;
  let gsRed4 = "ff707e"->hex;
  let gsRed5 = "ff001a"->hex;
  let gsRed6 = "e70017"->hex;
  let gsRed7 = "cb0014"->hex;
  let gsRed8 = "a90011"->hex;
  let gsRed9 = "7b000c"->hex;
  let gsOrange0 = "ffeee3"->hex;
  let gsOrange1 = "ffdcc5"->hex;
  let gsOrange2 = "ffc8a3"->hex;
  let gsOrange3 = "ffb07b"->hex;
  let gsOrange4 = "ff9149"->hex;
  let gsOrange5 = "ff6600"->hex;
  let gsOrange6 = "e65c00"->hex;
  let gsOrange7 = "ca5000"->hex;
  let gsOrange8 = "a74300"->hex;
  let gsOrange9 = "783000"->hex;
  let gsYellow0 = "fffbe0"->hex;
  let gsYellow1 = "fff8be"->hex;
  let gsYellow2 = "fff499"->hex;
  let gsYellow3 = "fff06e"->hex;
  let gsYellow4 = "ffeb3c"->hex;
  let gsYellow5 = "ffe500"->hex;
  let gsYellow6 = "e7cf00"->hex;
  let gsYellow7 = "cbb600"->hex;
  let gsYellow8 = "a99700"->hex;
  let gsYellow9 = "7a6e00"->hex;
  let gsLime0 = "f4ffe3"->hex;
  let gsLime1 = "e8ffc5"->hex;
  let gsLime2 = "daffa3"->hex;
  let gsLime3 = "caff7a"->hex;
  let gsLime4 = "b5ff48"->hex;
  let gsLime5 = "99ff00"->hex;
  let gsLime6 = "8ae700"->hex;
  let gsLime7 = "79cb00"->hex;
  let gsLime8 = "65a900"->hex;
  let gsLime9 = "497b00"->hex;
  let gsGreen0 = "ecffe9"->hex;
  let gsGreen1 = "d6ffd2"->hex;
  let gsGreen2 = "bdffb6"->hex;
  let gsGreen3 = "9fff95"->hex;
  let gsGreen4 = "77ff67"->hex;
  let gsGreen5 = "1aff00"->hex;
  let gsGreen6 = "17e700"->hex;
  let gsGreen7 = "14cb00"->hex;
  let gsGreen8 = "11a900"->hex;
  let gsGreen9 = "0c7b00"->hex;
  let gsTeal0 = "e9fff2"->hex;
  let gsTeal1 = "d2ffe4"->hex;
  let gsTeal2 = "b6ffd3"->hex;
  let gsTeal3 = "94ffbf"->hex;
  let gsTeal4 = "66ffa3"->hex;
  let gsTeal5 = "00ff66"->hex;
  let gsTeal6 = "00e75c"->hex;
  let gsTeal7 = "00cb51"->hex;
  let gsTeal8 = "00a943"->hex;
  let gsTeal9 = "007b31"->hex;
  let gsCyan0 = "eafffc"->hex;
  let gsCyan1 = "d3fffa"->hex;
  let gsCyan2 = "b8fff8"->hex;
  let gsCyan3 = "98fff4"->hex;
  let gsCyan4 = "6bfff0"->hex;
  let gsCyan5 = "00ffe6"->hex;
  let gsCyan6 = "00e7d0"->hex;
  let gsCyan7 = "00cbb7"->hex;
  let gsCyan8 = "00a998"->hex;
  let gsCyan9 = "007b6f"->hex;
};

module Theme = {
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
    open Css;
    type t = {
      baseBackgroundColor: color,
      baseForegroundColor: color,
      cardBackgroundColor: color,
      cardForegroundColor: color,
      baseLinkColor: color,
      visitedLinkColor: color,
      activeLinkColor: color,
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

  let darkTheme = {
    typography,
    colors: {
      baseBackgroundColor: Palette.gsBlack,
      baseForegroundColor: Palette.gsGray0,
      cardBackgroundColor: Palette.gsGray8,
      cardForegroundColor: Palette.gsGray0,
      baseLinkColor: Palette.gsBlue4,
      visitedLinkColor: Palette.gsViolet4,
      activeLinkColor: Palette.gsRed4,
    },
  };

  let lightTheme = {
    typography,
    colors: {
      baseBackgroundColor: Palette.gsGray0,
      baseForegroundColor: Palette.gsGray9,
      cardBackgroundColor: Css.white,
      cardForegroundColor: Palette.gsBlack,
      baseLinkColor: Palette.gsBlue5,
      visitedLinkColor: Palette.gsViolet5,
      activeLinkColor: Palette.gsRed5,
    },
  };
};

module ThemeNames = {
  type t =
    | Light
    | Dark;

  let fromString =
    fun
    | "light" => Some(Light)
    | "dark" => Some(Dark)
    | _ => None;

  let toString =
    fun
    | Light => "light"
    | Dark => "dark";
};

module ThemeContext = {
  let themeContext = React.createContext(ThemeNames.Light);
  let makeProps = (~value, ~children, ()) => {
    "value": value,
    "children": children,
  };
  let make = React.Context.provider(themeContext);
};

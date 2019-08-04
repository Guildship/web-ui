type contrastScores = {
  .
  "AA": bool,
  "AALarge": bool,
  "AAA": bool,
  "AAALarge": bool,
};

[@bs.val] [@bs.module "polished"]
external transparentize: (float, 'a) => string = "transparentize";

[@bs.val] [@bs.module "polished"]
external opacify: (float, 'a) => string = "opacify";

[@bs.val] [@bs.module "polished"]
external rgbToColorString: 'a => string = "rgbToColorString";

[@bs.val] [@bs.module "polished"]
external rgbaToColorString: 'a => string = "rgbToColorString";

[@bs.val] [@bs.module "polished"]
external toColorString: 'a => string = "toColorString";

[@bs.val] [@bs.module "polished"]
external modularScale: (int, 'a, 'b) => string = "modularScale";

[@bs.val] [@bs.module "polished"]
external adjustHue: (int, 'a) => string = "adjustHue";

[@bs.val] [@bs.module "polished"]
external compliment: 'a => string = "compliment";

[@bs.val] [@bs.module "polished"]
external darken: (float, 'a) => string = "darken";

[@bs.val] [@bs.module "polished"]
external desaturate: (float, 'a) => string = "desaturate";

[@bs.val] [@bs.module "polished"]
external getContrast: ('a, 'b) => float = "getContrast";

[@bs.val] [@bs.module "polished"]
external getLuminance: 'a => float = "getLuminance";

[@bs.val] [@bs.module "polished"]
external grayscale: 'a => string = "grayscale";

[@bs.val] [@bs.module "polished"] external hsl: 'a => string = "hsl";

[@bs.val] [@bs.module "polished"] external hsla: 'a => string = "hsla";

[@bs.val] [@bs.module "polished"]
external hslToColorString: 'a => string = "hslToColorString";

[@bs.val] [@bs.module "polished"] external invert: 'a => string = "invert";

[@bs.val] [@bs.module "polished"]
external lighten: (float, 'a) => string = "lighten";

[@bs.val] [@bs.module "polished"]
external meetsContrastGuidelines: ('a, 'b) => contrastScores =
  "meetsContrastGuidelines";

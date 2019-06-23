type contrastScores = {
  .
  "AA": bool,
  "AALarge": bool,
  "AAA": bool,
  "AAALarge": bool,
};

[@bs.val] [@bs.module "polished"]
external transparentize: (float, 'a) => string = "";

[@bs.val] [@bs.module "polished"] external opacify: (float, 'a) => string = "";

[@bs.val] [@bs.module "polished"] external rgbToColorString: 'a => string = "";

[@bs.val] [@bs.module "polished"]
external rgbaToColorString: 'a => string = "";

[@bs.val] [@bs.module "polished"] external toColorString: 'a => string = "";

[@bs.val] [@bs.module "polished"]
external modularScale: (int, 'a, 'b) => string = "";

[@bs.val] [@bs.module "polished"] external adjustHue: (int, 'a) => string = "";

[@bs.val] [@bs.module "polished"] external compliment: 'a => string = "";

[@bs.val] [@bs.module "polished"] external darken: (float, 'a) => string = "";

[@bs.val] [@bs.module "polished"]
external desaturate: (float, 'a) => string = "";

[@bs.val] [@bs.module "polished"] external getContrast: ('a, 'b) => float = "";

[@bs.val] [@bs.module "polished"] external getLuminance: 'a => float = "";

[@bs.val] [@bs.module "polished"] external grayscale: 'a => string = "";

[@bs.val] [@bs.module "polished"] external hsl: 'a => string = "";

[@bs.val] [@bs.module "polished"] external hsla: 'a => string = "";

[@bs.val] [@bs.module "polished"] external hslToColorString: 'a => string = "";

[@bs.val] [@bs.module "polished"] external invert: 'a => string = "";

[@bs.val] [@bs.module "polished"] external lighten: (float, 'a) => string = "";

[@bs.val] [@bs.module "polished"]
external meetsContrastGuidelines: ('a, 'b) => contrastScores = "";

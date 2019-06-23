[@bs.val] [@bs.module "polished"]
external transparentize: (float, string) => string = "";

[@bs.val] [@bs.module "polished"]
external opacify: (float, string) => string = "";

[@bs.val] [@bs.module "polished"] external rgbToColorString: 'a => string = "";

[@bs.val] [@bs.module "polished"]
external rgbaToColorString: 'a => string = "";

[@bs.val] [@bs.module "polished"] external toColorString: 'a => string = "";

[@bs.val] [@bs.module "polished"]
external modularScale: (int, 'a, 'b) => string = "";

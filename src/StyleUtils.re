include Ux;
open PolishedRe;

module Color = {
  [@bs.deriving abstract]
  type rgb = {
    red: int,
    blue: int,
    green: int,
  };

  [@bs.deriving abstract]
  type rgba = {
    red: int,
    blue: int,
    green: int,
    alpha: float,
  };

  [@bs.deriving abstract]
  type hsl = {
    hue: float,
    saturation: float,
    lightness: float,
  };

  [@bs.deriving abstract]
  type hsla = {
    hue: float,
    saturation: float,
    lightness: float,
    alpha: float,
  };

  type colorObject =
    | Rgb(rgb)
    | Rgba(rgba)
    | Hsl(hsl)
    | Hsla(hsla);

  let transparentize = (string, float) => transparentize(float, string);

  let opacify = (string, float) => opacify(float, string);

  let rgbToColorString = (obj: rgb) => rgbToColorString(obj);

  let rgbaToColorString = (obj: rgba) => rgbaToColorString(obj);

  let toColorString =
    fun
    | Rgb(obj) => toColorString(obj)
    | Rgba(obj) => toColorString(obj)
    | Hsl(obj) => toColorString(obj)
    | Hsla(obj) => toColorString(obj);
};

module ModularScale = {
  type t =
    | Number(int)
    | MinorSecond
    | MajorThird;

  let toString =
    fun
    | MinorSecond => "minorSecond"
    | MajorThird => "majorThird"
    | Number(n) => n->string_of_int;

  let modularScale = (steps, base, ratio) =>
    switch (steps, base, ratio) {
    | (steps, base, Number(n)) => PolishedRe.modularScale(steps, base, n)
    | (steps, base, ratio) =>
      PolishedRe.modularScale(steps, base, ratio->toString)
    };

  let modularScale = (steps, base, ratio) =>
    modularScale(steps, base, ratio);

  let get = n => modularScale(n, "1rem", MajorThird);
};

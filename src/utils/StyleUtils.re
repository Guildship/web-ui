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
    | MinorSecond
    | MajorSecond
    | MinorThird
    | MajorThird
    | PerfectFourth
    | AugFourth
    | PerfectFifth
    | MinorSixth
    | GoldenSection
    | MajorSixth
    | MinorSeventh
    | MajorSeventh
    | Octave
    | MajorTenth
    | MajorEleventh
    | MajorTwelfth
    | DoubleOctave
    | Number(int);

  let toString =
    fun
    | MinorSecond => "minorSecond"
    | MajorSecond => "majorSecond"
    | MinorThird => "minorThird"
    | MajorThird => "majorThird"
    | PerfectFourth => "perfectFourth"
    | AugFourth => "augFourth"
    | PerfectFifth => "perfectFifth"
    | MinorSixth => "minorSixth"
    | GoldenSection => "goldenSection"
    | MajorSixth => "majorSixth"
    | MinorSeventh => "minorSeventh"
    | MajorSeventh => "majorSeventh"
    | Octave => "octave"
    | MajorTenth => "majorTenth"
    | MajorEleventh => "majorEleventh"
    | MajorTwelfth => "majorTwelfth"
    | DoubleOctave => "doubleOctave"
    | Number(n) => n->string_of_int;

  let modularScale = (~steps, ~base, ~ratio) =>
    switch (steps, base, ratio) {
    | (steps, base, Number(n)) => PolishedRe.modularScale(steps, base, n)
    | (steps, base, ratio) =>
      PolishedRe.modularScale(steps, base, ratio->toString)
    };

  let get = n => modularScale(~steps=n, ~base="1rem", ~ratio=MajorThird);
};

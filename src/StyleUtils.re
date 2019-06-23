include Ux;

module ModularScale = {
  type t = (float, float, float, float, float, float, float, float);

  let make = (base, multiplier): t => (
    base->float_of_int,
    base->float_of_int *. multiplier,
    base->float_of_int *. multiplier ** 2.0,
    base->float_of_int *. multiplier ** 3.0,
    base->float_of_int *. multiplier ** 4.0,
    base->float_of_int *. multiplier ** 5.0,
    base->float_of_int *. multiplier ** 6.0,
    base->float_of_int *. multiplier ** 7.0,
  );

  let n1 = ((n, _, _, _, _, _, _, _): t) => n;
  let n2 = ((_, n, _, _, _, _, _, _): t) => n;
  let n3 = ((_, _, n, _, _, _, _, _): t) => n;
  let n4 = ((_, _, _, n, _, _, _, _): t) => n;
  let n5 = ((_, _, _, _, n, _, _, _): t) => n;
  let n6 = ((_, _, _, _, _, n, _, _): t) => n;
  let n7 = ((_, _, _, _, _, _, n, _): t) => n;
  let n8 = ((_, _, _, _, _, _, _, n): t) => n;
};

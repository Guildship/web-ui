include Belt;

let noop = () => ();
let noop1 = _ => ();
let noop2 = (_, _) => ();
let noop3 = (_, _, _) => ();

let doThenReturn = (a, f) => {
  f(a);
  a;
};

let inspect = t => {
  doThenReturn(t, Js.log);
};

let inspect2 = (t, label) => {
  Js.log2(label, t);
  t;
};

module OptionUtils = {
  let none = f => {
    f();
    None;
  };
};

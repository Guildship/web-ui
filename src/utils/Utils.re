open Belt;

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

module FunctionUtils = {
  let flip = (f, a, b) => f(b, a);
  let flip3 = (f, a, b, c) => f(b, c, a);
};

module DomUtils = {
  type matchMedia;
  [@bs.val] external matchMedia: string => matchMedia = "window.matchMedia";
  [@bs.get] external matches: matchMedia => bool = "matches";
};

module Exceptionable = {
  let toOption = a =>
    switch (a()) {
    | exception _ => None
    | v => Some(v)
    };

  let toResult = a => {
    switch (a()) {
    | exception t => Result.Error(t)
    | v => Result.Ok(v)
    };
  };
};

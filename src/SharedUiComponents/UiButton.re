open Utils;
open ReactUtils;
open StyleUtils;

[@react.component]
let make =
    (~className="", ~children=null, ~onClick=noop1, ~intent=Intent.None) => {
  <button className onClick> children </button>;
};

let default = make;

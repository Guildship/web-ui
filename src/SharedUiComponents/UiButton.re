open Utils;
open ReactUtils;
open StyleUtils;

[@react.component]
let make = (~children=null, ~onClick=noop1, ~intent=Intent.None) =>
  <button onClick> children </button>;

let default = make;

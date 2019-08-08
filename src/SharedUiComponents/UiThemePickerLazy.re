module type T = (module type of UiThemePicker);

[@bs.val] external component: (module T) = "undefined";

module Lazy: T = {
  include (val component);
  let make =
    ReLoadable.lazy_(() => DynamicImport.import("./UiThemePicker.bs.js"));
  let default = make;
};

module type T = (module type of GsUi_ThemePicker);

[@bs.val] external component: (module T) = "undefined";

module Lazy: T = {
  include (val component);
  let make =
    ReLoadable.lazy_(() => DynamicImport.import("./GsUi_ThemePicker.bs.js"));
  let default = make;
};

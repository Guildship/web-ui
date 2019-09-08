module type T = (module type of GsUi_ThemePicker);

[@bs.val] external component: (module T) = "undefined";

module Lazy: T = {
  include (val component);
  let make = LazyImport.(lazy_(() => import("./GsUi_ThemePicker.bs")));
  let default = make;
};

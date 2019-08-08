module type T = (module type of Page_UnauthedHome);

[@bs.val] external component: (module T) = "undefined";

module Lazy: T = {
  include (val component);

  let make =
    ReLoadable.lazy_(() => DynamicImport.import("./Page_UnauthedHome.bs.js"));
  let default = make;
};

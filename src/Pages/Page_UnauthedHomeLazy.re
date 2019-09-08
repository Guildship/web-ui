module type T = (module type of Page_UnauthedHome);

[@bs.val] external component: (module T) = "undefined";

module Lazy: T = {
  include (val component);

  let make = LazyImport.(lazy_(() => import("./Page_UnauthedHome.bs")));
  let default = make;
};

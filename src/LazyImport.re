[@bs.val] external import: string => Js.Promise.t('a) = "import";

[@bs.module "react"]
external lazy_: (unit => Js.Promise.t('a)) => 'a = "lazy";

module String15 = {
  type t = string;

  let make = (string: string): option(t) =>
    switch (string->String.length) {
    | length when length > 0 && length <= 15 => Some(string)
    | _ => None
    };

  let toString = (string: t) => string;
};

module String50 = {
  type t = string;

  let make = (string: string): option(t) =>
    switch (string->String.length) {
    | length when length > 0 && length <= 50 => Some(string)
    | _ => None
    };

  let toString = (string: t) => string;
};

module String255 = {
  type t = string;

  let make = (string: string): option(t) =>
    switch (string->String.length) {
    | length when length > 0 && length <= 255 => Some(string)
    | _ => None
    };

  let toString = (string: t) => string;
};

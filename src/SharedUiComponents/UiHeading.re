[@react.component]
let make = (~level: int, ~children) => {
  switch (level) {
  | 1 => <h1> children </h1>
  | 2 => <h2> children </h2>
  | 3 => <h3> children </h3>
  | 4 => <h4> children </h4>
  | 5 => <h5> children </h5>
  | 6
  | _ => <h6> children </h6>
  };
};

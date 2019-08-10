open Utils;

[@react.component]
let make = (~path, ~className=?, ~children) => {
  let handleClick = e => {
    e->ReactEvent.Mouse.preventDefault;
    ReasonReactRouter.push(path);
  };

  <a
    href=path
    className={className->Option.getWithDefault("")}
    onClick=handleClick>
    children
  </a>;
};

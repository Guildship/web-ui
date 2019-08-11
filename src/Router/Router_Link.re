[@react.component]
let make = (~path, ~className="", ~children) => {
  let handleClick = e => {
    e->ReactEvent.Mouse.preventDefault;
    ReasonReactRouter.push(path);
  };

  <a href=path className onClick=handleClick> children </a>;
};

open ReactUtils;

[@react.component]
let make = (~block=false, ~children) => {
  module Styles = {
    open Css;

    let text = style([]);
    let inlineText = style([display(inlineBlock)]);
  };

  switch (block) {
  | true => <p className=Styles.text> children </p>
  | _ =>
    <span className={classNames([|Styles.inlineText, Styles.text|])}>
      children
    </span>
  };
};

open ReactUtils;
open GsUi;
open AppStyles.Theme;

[@react.component]
let make = (~id) => {
  module Styles = {
    open Css;

    let wrapper = style([padding(1.0->rem)]);
  };

  <Pane elevation=Elevation1 className=Styles.wrapper>
    <Heading> id->string </Heading>
  </Pane>;
};

let default = make;

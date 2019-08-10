open ReactUtils;
open SharedUiComponents;
open Router;

[@react.component]
let make = () => {
  module Styles = {
    open Css;

    let wrapper = style([padding2(~h=1.->rem, ~v=zero)]);
  };

  <div className=Styles.wrapper>
    <Heading level=1> "Guildship"->str </Heading>
    <Link path="/me/settings"> "Go to settings"->str </Link>
    <Suspense fallback=null> <ThemePickerLazy.Lazy /> </Suspense>
  </div>;
};

let default = make;

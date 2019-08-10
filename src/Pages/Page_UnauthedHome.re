open ReactUtils;
open SharedUiComponents;
open Router;
open GuildshipUi;

[@react.component]
let make = () => {
  module Styles = {
    open Css;

    let wrapper = style([padding2(~h=1.->rem, ~v=zero)]);
    let pane = style([padding(1.0->rem)]);
  };

  <div className=Styles.wrapper>
    <Heading level=1> "Guildship"->str </Heading>
    <Link path="/me/settings"> <Text> "Go to settings"->str </Text> </Link>
    <GuildshipUi.Pane className=Styles.pane>
      <Suspense fallback=null> <ThemePickerLazy.Lazy /> </Suspense>
    </GuildshipUi.Pane>
  </div>;
};

let default = make;

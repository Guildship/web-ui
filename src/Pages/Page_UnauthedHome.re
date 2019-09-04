open ReactUtils;
open GsUi;
open AppStyles.Theme;

[@react.component]
let make = () => {
  module Styles = {
    open Css;

    let wrapper = style([padding2(~h=1.->rem, ~v=zero)]);
    let pane = style([padding(1.0->rem)]);
  };

  <div className=Styles.wrapper>
    <Heading size=Heading.S900> "Guildship"->str </Heading>
    <Link href="/me/settings"> <Text> "Go to settings"->str </Text> </Link>
    <GsUi.Pane elevation=Elevation1 className=Styles.pane>
      <Suspense fallback=null> <ThemePickerLazy.Lazy /> </Suspense>
    </GsUi.Pane>
  </div>;
};

let default = make;

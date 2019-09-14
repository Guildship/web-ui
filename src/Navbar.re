open ReactUtils;
open GsUi;
open Emotion;

module Styles = {
  let heading = [%css [display(inlineBlock), margin(zero), padding(zero)]];
  let link = [%css
    [
      textDecoration(none),
      borderRadius(3->px),
      padding(0.25->rem),
      hover([backgroundColor(rgba(0, 0, 0, 0.1))]),
    ]
  ];
  let pane = [%css [padding(0.5->rem)]];
};

[@react.component]
let make = () => {
  <Pane className=Styles.pane elevation=AppStyles.Theme.Elevation1>
    <Link className=Styles.link href="/">
      <Heading className=Styles.heading size=Heading.S600>
        <strong> "Guildship"->string </strong>
      </Heading>
    </Link>
  </Pane>;
};

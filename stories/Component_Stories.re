open ReactUtils;
open BsStorybook.Story;
open StorybookUtils;
open GuildshipUi;
open AppStyles.Theme;

storiesOf("Components", _module)
->add("Theme Picker", () => <ThemePicker />)
->add("Pane", () => {
    module Styles = {
      open Css;

      let container =
        style([
          display(grid),
          padding(1.5->rem),
          gridAutoRows(120->px),
          unsafe(
            "gridTemplateColumns",
            "repeat(auto-fill, minMax(240px, 1fr))",
          ),
          gridGap(2.0->rem),
        ]);

      let pane =
        style([
          display(`flex),
          justifyContent(center),
          alignItems(center),
          flexDirection(column),
        ]);
    };
    <div className=Styles.container>
      <Pane className=Styles.pane elevation=Elevation0>
        <Text> "Elevation 0"->str </Text>
      </Pane>
      <Pane className=Styles.pane elevation=Elevation1>
        <Text> "Elevation 1"->str </Text>
      </Pane>
      <Pane className=Styles.pane elevation=Elevation2>
        <Text> "Elevation 2"->str </Text>
      </Pane>
      <Pane className=Styles.pane elevation=Elevation3>
        <Text> "Elevation 3"->str </Text>
      </Pane>
      <Pane className=Styles.pane elevation=Elevation4>
        <Text> "Elevation 4"->str </Text>
      </Pane>
    </div>;
  });

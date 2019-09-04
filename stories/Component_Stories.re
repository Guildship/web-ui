open ReactUtils;
open BsStorybook.Story;
open StorybookUtils;
open GsUi;
open AppStyles.Theme;

storiesOf("Components", _module)
->add("Theme Picker", () => <ThemePicker />)
->add("Pane", () => {
    module Styles = {
      open Css;

      let container =
        style([
          display(grid),
          gridAutoRows(120->px),
          unsafe(
            "gridTemplateColumns",
            "repeat(auto-fill, minMax(240px, 1fr))",
          ),
          gridRowGap(8->px),
          gridColumnGap(1.->rem),
        ]);

      let pane =
        style([
          display(`flex),
          justifyContent(center),
          alignItems(center),
          flexDirection(column),
        ]);

      let basicPane =
        style([
          width(240->px),
          height(120->px),
          display(`flex),
          justifyContent(center),
          alignItems(center),
        ]);
    };

    <>
      <Heading> "Pane"->str </Heading>
      <Pane className=Styles.basicPane> <Text> "Pane"->str </Text> </Pane>
      <Heading> "Elevation"->str </Heading>
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
      </div>
    </>;
  })
->add("Button", () =>
    Ux.(
      <>
        <Heading> "Basic Button"->str </Heading>
        <Button appearance=Button.Primary marginRight=16>
          "Button"->str
        </Button>
        <Heading> "Default Buttons"->str </Heading>
        <Button appearance=Button.Default intent=Intent.None marginRight=16>
          "None"->str
        </Button>
        <Button appearance=Button.Default intent=Intent.Success marginRight=16>
          "Success"->str
        </Button>
        <Button appearance=Button.Default intent=Intent.Warning marginRight=16>
          "Warning"->str
        </Button>
        <Button appearance=Button.Default intent=Intent.Danger marginRight=16>
          "Danger"->str
        </Button>
        <Heading> "Primary Buttons"->str </Heading>
        <Button appearance=Button.Primary intent=Intent.None marginRight=16>
          "None"->str
        </Button>
        <Button appearance=Button.Primary intent=Intent.Success marginRight=16>
          "Success"->str
        </Button>
        <Button appearance=Button.Primary intent=Intent.Warning marginRight=16>
          "Warning"->str
        </Button>
        <Button appearance=Button.Primary intent=Intent.Danger marginRight=16>
          "Danger"->str
        </Button>
        <Heading> "Minimal Buttons"->str </Heading>
        <Button appearance=Button.Minimal intent=Intent.None marginRight=16>
          "None"->str
        </Button>
        <Button appearance=Button.Minimal intent=Intent.Success marginRight=16>
          "Success"->str
        </Button>
        <Button appearance=Button.Minimal intent=Intent.Warning marginRight=16>
          "Warning"->str
        </Button>
        <Button appearance=Button.Minimal intent=Intent.Danger marginRight=16>
          "Danger"->str
        </Button>
      </>
    )
  );

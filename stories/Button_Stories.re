open BsStorybook.Story;
open BsStorybook.Action;
open StorybookUtils;
open SharedUiComponents;
open ReactUtils;

storiesOf("Button", _module)
->add("Button thing!", () => <Button> "Howdy!"->str </Button>)
->add("Button onClick!", () =>
    <Button onClick={action("Button clicked!")}> "Howdy!"->str </Button>
  );

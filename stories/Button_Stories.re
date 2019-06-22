open StorybookRe;
open SharedUiComponents;

storiesOf("Button", _module)
->add("Button thing!", () => <Button> "Howdy!"->React.string </Button>);

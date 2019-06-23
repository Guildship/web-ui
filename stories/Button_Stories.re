open StorybookRe;
open SharedUiComponents;
open ReactUtils;

storiesOf("Button", _module)
->add("Button thing!", () => <Button> "Howdy!"->str </Button>)
->add("Button onClick!", () =>
    <Button onClick={_ => Js.log("Howdy!")}> "Howdy!"->str </Button>
  );

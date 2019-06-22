open StorybookRe;
open SharedUiComponents;

storiesOf("Box", _module)
->add("Box thing!", () => <Box name=""> "Yooo!"->React.string </Box>);

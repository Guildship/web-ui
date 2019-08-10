open BsStorybook.Story;
open StorybookUtils;
open SharedUiComponents;
open ReactUtils;

storiesOf("Styleguide", _module)
->add("Typography", () =>
    <>
      <Heading level=1> "Heading 1"->str </Heading>
      <Heading level=2> "Heading 2"->str </Heading>
      <Heading level=3> "Heading 3"->str </Heading>
      <Heading level=4> "Heading 4"->str </Heading>
      <Heading level=5> "Heading 5"->str </Heading>
      <Heading level=6> "Heading 6"->str </Heading>
      <Text block=true> "Text block"->str </Text>
      <Text> "Text"->str </Text>
    </>
  );

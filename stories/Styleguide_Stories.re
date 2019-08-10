open BsStorybook.Story;
open StorybookUtils;
open SharedUiComponents;
open GuildshipUi;
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
      <div>
        <Text size=Text.SM>
          "Text SM: The quick brown fox jumps over the lazy dog"->str
        </Text>
      </div>
      <div>
        <Text size=Text.MED>
          "Text MED: The quick brown fox jumps over the lazy dog"->str
        </Text>
      </div>
      <div>
        <Text size=Text.LG>
          "Text LG: The quick brown fox jumps over the lazy dog"->str
        </Text>
      </div>
      <div>
        <Text size=Text.XL>
          "Text XL: The quick brown fox jumps over the lazy dog"->str
        </Text>
      </div>
      <Paragraph size=Paragraph.SM>
        "Paragraph SM: Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum."
        ->str
      </Paragraph>
      <Paragraph size=Paragraph.MED>
        "Paragraph MED: Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum."
        ->str
      </Paragraph>
      <Paragraph size=Paragraph.LG>
        "Paragraph LG: Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum."
        ->str
      </Paragraph>
    </>
  );

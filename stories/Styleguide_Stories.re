open BsStorybook.Story;
open StorybookUtils;
open GuildshipUi;
open ReactUtils;

storiesOf("Styleguide", _module)
->add("Typography", () =>
    <>
      <Heading size=Heading.S100> "Heading 100"->str </Heading>
      <Heading size=Heading.S200> "Heading 200"->str </Heading>
      <Heading size=Heading.S300> "Heading 300"->str </Heading>
      <Heading size=Heading.S400> "Heading 400"->str </Heading>
      <Heading size=Heading.S500> "Heading 500"->str </Heading>
      <Heading size=Heading.S600> "Heading 600"->str </Heading>
      <Heading size=Heading.S700> "Heading 700"->str </Heading>
      <Heading size=Heading.S800> "Heading 800"->str </Heading>
      <Heading size=Heading.S900> "Heading 900"->str </Heading>
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

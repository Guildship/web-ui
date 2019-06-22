type storybookModule;
type section;
type chapter = unit => React.element;

[@bs.val] external _module: storybookModule = "module";

[@bs.val] [@bs.module "@storybook/react"]
external storiesOf: (string, storybookModule) => section = "";

[@bs.send] external add: (section, string, chapter) => unit = "add";

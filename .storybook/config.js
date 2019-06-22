import { themes } from "@storybook/theming";
import { configure, addParameters } from "@storybook/react";

const req = require.context("../stories", true, /_Stories\.bs\.js$/);
function loadStories() {
  req.keys().forEach(filename => req(filename));
}

addParameters({
  options: {
    theme: themes.dark
  }
});

configure(loadStories, module);

open ReactUtils;
open AppStyles;
open ReactUtils.Hooks;

[@react.component]
let make = () => {
  open ThemeNames;
  let (autoTheme, setAutoTheme) = useAutoTheme(false);
  let {theme, themeName, setTheme} = useTheme(~auto=autoTheme);

  let toggleTheme = () => {
    switch (themeName) {
    | Light => setTheme(Dark)
    | Dark => setTheme(Light)
    };
  };

  let toggleAutoTheme = () => {
    setAutoTheme(!autoTheme);
  };

  module Styles = {
    open Css;
    open Theme;

    let appContainer =
      style([
        flex(1),
        backgroundColor(theme.colors.baseBackgroundColor),
        color(theme.colors.baseForegroundColor),
      ]);

    let heading =
      style([lineHeight(theme.typography.headingLineHeight->em)]);
    let baseTypography = style([margin2(~v=0.5->em, ~h=zero)]);

    let h1 =
      merge([
        heading,
        baseTypography,
        style([
          unsafe("font-size", theme.typography.h1FontSize),
          fontWeight(`num(theme.typography.h1FontWeight)),
        ]),
      ]);
  };

  <ThemeContext value=themeName>
    <Gql.Provider client=Gql.client>
      <main className=Styles.appContainer>
        <h1 className=Styles.h1> "Guildship"->str </h1>
        <h2> {themeName->ThemeNames.toString->str} </h2>
        <button onClick={_ => toggleTheme()}> "Toggle theme"->str </button>
        <button onClick={_ => toggleAutoTheme()}>
          {("Auto theme " ++ (autoTheme ? "enabled" : "disabled"))->str}
        </button>
      </main>
    </Gql.Provider>
  </ThemeContext>;
};

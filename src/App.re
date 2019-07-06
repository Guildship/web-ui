open ReactUtils;

module Styles = {
  open Css;
  let theme = AppStyles.Theme.theme;

  let appContainer =
    style([
      flex(1),
      backgroundColor(theme.colors.baseBackgroundColor),
      color(theme.colors.baseForegroundColor),
    ]);

  let heading = style([lineHeight(theme.typography.headingLineHeight->em)]);
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

[@react.component]
let make = () => {
  <ReasonApollo.Provider client=Gql.client>
    <main className=Styles.appContainer>
      <h1 className=Styles.h1> "Guildship"->str </h1>
      <ShowGuilds />
    </main>
  </ReasonApollo.Provider>;
};

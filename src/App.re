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
  let h2 =
    merge([
      heading,
      baseTypography,
      style([
        unsafe("font-size", theme.typography.h2FontSize),
        fontWeight(`num(theme.typography.h2FontWeight)),
      ]),
    ]);
  let h3 =
    merge([
      heading,
      baseTypography,
      style([
        unsafe("font-size", theme.typography.h3FontSize),
        fontWeight(`num(theme.typography.h3FontWeight)),
      ]),
    ]);
  let h4 =
    merge([
      heading,
      baseTypography,
      style([
        unsafe("font-size", theme.typography.h4FontSize),
        fontWeight(`num(theme.typography.h4FontWeight)),
      ]),
    ]);
  let h5 =
    merge([
      heading,
      baseTypography,
      style([
        unsafe("font-size", theme.typography.h5FontSize),
        fontWeight(`num(theme.typography.h5FontWeight)),
      ]),
    ]);
  let h6 =
    merge([
      heading,
      baseTypography,
      style([
        unsafe("font-size", theme.typography.h6FontSize),
        fontWeight(`num(theme.typography.h6FontWeight)),
      ]),
    ]);
  let p =
    merge([
      heading,
      baseTypography,
      style([
        lineHeight(theme.typography.baseLineHeight->em),
        unsafe("font-size", theme.typography.baseFontSize),
        fontWeight(`num(theme.typography.baseFontWeight)),
      ]),
    ]);
  let a =
    merge([
      style([
        color(theme.colors.baseLinkColor),
        unsafe("font-size", theme.typography.baseFontSize),
        fontWeight(`num(theme.typography.baseFontWeight)),
        visited([color(theme.colors.visitedLinkColor)]),
        active([color(theme.colors.activeLinkColor)]),
      ]),
    ]);
};

module GetGuilds = [%graphql
  {|
  query guilds(first: 10) {
    edges {
      node {
        id
        displayName
      }
    }
  }
|}
];

let query = GetGuilds.make()##query;

[@react.component]
let make = () => {
  <main className=Styles.appContainer>
    <h1 className=Styles.h1> "Guildship"->str </h1>
    <h2 className=Styles.h2> "Guildship"->str </h2>
    <h3 className=Styles.h3> "Guildship"->str </h3>
    <h4 className=Styles.h4> "Guildship"->str </h4>
    <h5 className=Styles.h5> "Guildship"->str </h5>
    <h6 className=Styles.h6> "Guildship"->str </h6>
    <p className=Styles.p>
      "Nulla bibendum, massa pellentesque ultricies molestie, nisi nunc egestas tellus, vitae molestie nisi justo a dolor. Nulla sit amet ante at tellus laoreet accumsan. Fusce pretium suscipit purus, ut venenatis risus placerat et. Proin pellentesque eu dolor quis vulputate. "
      ->str
      <a className=Styles.a href="#"> "Lorem ipsum dolor site amet"->str </a>
      ", consectetur adipiscing elit. Quisque lacinia erat quis eros porta bibendum. Cras consectetur felis ut neque volutpat ultricies. Ut placerat ligula eu neque malesuada, quis blandit enim sagittis. Maecenas pellentesque iaculis gravida. Proin iaculis laoreet hendrerit. Aenean id lacus non ipsum euismod tempus. Donec lacus lectus, cursus vel lacinia non, feugiat vitae dui. Praesent quis justo metus. Ut in egestas arcu, at ullamcorper arcu. Fusce at lectus feugiat dolor bibendum consequat."
      ->str
    </p>
    <p className=Styles.p>
      "Nam bibendum venenatis eros, a rhoncus orci dictum eget. Aenean vitae neque ut enim gravida sodales pharetra quis ante. In cursus sed ante a rutrum. Pellentesque cursus bibendum ipsum quis feugiat. Aenean at pretium turpis, et molestie odio. Maecenas faucibus massa quis mauris dictum tempor. Nunc pharetra maximus eros, eu rhoncus dui. Donec ipsum ex, efficitur ac nunc aliquam, hendrerit interdum lectus. Suspendisse in metus non est mattis pretium quis eget libero. Vivamus lobortis sem eu lorem lobortis, quis ultrices turpis facilisis."
      ->str
    </p>
    <p className=Styles.p>
      "Morbi vel leo vel nibh vestibulum consectetur. Curabitur malesuada lectus sapien, ut fringilla ex consequat sed. Sed neque risus, viverra non lectus mattis, commodo elementum quam. Aenean eget semper justo. Phasellus suscipit suscipit mi sit amet egestas. Nam nulla ex, maximus sit amet ante eu, rhoncus suscipit odio. Aliquam facilisis lorem eget venenatis aliquet. Nam vel arcu mauris. Pellentesque sit amet nibh ut erat scelerisque interdum. Quisque mollis fringilla nibh. Mauris et dapibus lacus, in tempus magna. Quisque at nisl vitae sapien maximus lacinia. Nulla eu lectus ornare, fermentum metus eget, imperdiet mi. Nunc bibendum convallis ornare."
      ->str
    </p>
  </main>;
};

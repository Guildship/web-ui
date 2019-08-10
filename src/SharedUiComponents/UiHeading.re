open ReactUtils;
open Hooks;
open AppStyles;
open ThemeStore;

[@react.component]
let make = (~level: int, ~children) => {
  let ({theme}, _) = useTheme();

  module Styles = {
    open Css;
    open Theme;

    let heading =
      style([lineHeight(theme.typography.headingLineHeight->em)]);
    let baseTypography = style([margin2(~v=0.25->em, ~h=zero)]);

    let baseHeading = merge([heading, baseTypography]);

    let h1 =
      merge([
        baseHeading,
        style([
          unsafe("fontSize", theme.typography.h1FontSize),
          fontWeight(`num(theme.typography.h1FontWeight)),
        ]),
      ]);

    let h2 =
      merge([
        baseHeading,
        style([
          unsafe("fontSize", theme.typography.h2FontSize),
          fontWeight(`num(theme.typography.h2FontWeight)),
        ]),
      ]);

    let h3 =
      merge([
        baseHeading,
        style([
          unsafe("fontSize", theme.typography.h3FontSize),
          fontWeight(`num(theme.typography.h3FontWeight)),
        ]),
      ]);

    let h4 =
      merge([
        baseHeading,
        style([
          unsafe("fontSize", theme.typography.h4FontSize),
          fontWeight(`num(theme.typography.h4FontWeight)),
        ]),
      ]);

    let h5 =
      merge([
        baseHeading,
        style([
          unsafe("fontSize", theme.typography.h5FontSize),
          fontWeight(`num(theme.typography.h5FontWeight)),
        ]),
      ]);

    let h6 =
      merge([
        baseHeading,
        style([
          unsafe("fontSize", theme.typography.h6FontSize),
          fontWeight(`num(theme.typography.h6FontWeight)),
        ]),
      ]);
  };

  switch (level) {
  | 1 => <h1 className=Styles.h1> children </h1>
  | 2 => <h2 className=Styles.h2> children </h2>
  | 3 => <h3 className=Styles.h3> children </h3>
  | 4 => <h4 className=Styles.h4> children </h4>
  | 5 => <h5 className=Styles.h5> children </h5>
  | 6
  | _ => <h6 className=Styles.h6> children </h6>
  };
};

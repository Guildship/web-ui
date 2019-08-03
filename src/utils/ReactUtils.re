include React;
let str = React.string;
let useOnMount = fn => useEffect1(fn, [||]);

module Hooks = {
  open Utils;
  type useThemeReturnType = {
    theme: AppStyles.Theme.t,
    themeName: AppStyles.ThemeNames.t,
    setTheme: AppStyles.ThemeNames.t => unit,
  };

  let useTheme = () =>
    /**
    What we want to do is the following:
    First and foremost the theme is whatever the user sets it to
    with the theme context.
    Otherwise, we look into localStorage and see what it is.
    Otherwise, the default theme is "light".
   */
    {
      open ReactResponsiveRe;
      open Dom.Storage;
      open AppStyles.ThemeNames;
      open AppStyles.Theme;
      let prefersDarkMode = useMediaQuery("(prefers-color-scheme: dark)");
      let (themeName, setThemeName) =
        useState(() =>
          Option.(
            (localStorage |> getItem("theme"))
            ->flatMap(fromString)
            ->getWithDefault(prefersDarkMode ? Dark : Light)
          )
        );

      let set = t => {
        setThemeName(_ => t);
        localStorage |> setItem("theme", t->toString);
      };

      let theme =
        switch (themeName) {
        | Light => lightTheme
        | Dark => darkTheme
        };

      {theme, themeName, setTheme: set};
    };
};

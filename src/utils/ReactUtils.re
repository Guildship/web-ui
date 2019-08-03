include React;
let str = React.string;
let useOnMount = fn => useEffect1(fn, [||]);

module Hooks = {
  open Utils;

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
      let prefersDarkMode = useMediaQuery("(prefers-color-scheme: dark)");
      let (theme, setTheme) =
        useState(() =>
          Option.(
            (localStorage |> getItem("theme"))
            ->flatMap(fromString)
            ->getWithDefault(prefersDarkMode ? Dark : Light)
          )
        );

      let set = t => {
        setTheme(_ => t);
        localStorage |> setItem("theme", t->toString);
      };

      (theme, set);
    };
};

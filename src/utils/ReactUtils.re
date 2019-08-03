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

  let useAutoTheme = (default: bool) => {
    open Dom.Storage;
    open FunctionUtils;

    let getItem = flip(getItem);
    let setItem = flip3(setItem);

    let storedState = localStorage->getItem("autoTheme");

    let (state, setState) =
      useState(() => {
        switch (storedState) {
        | None => localStorage->setItem("autoTheme", default->string_of_bool)
        | _ => ()
        };

        switch (storedState) {
        | Some("true") => true
        | Some("false") => false
        | _ => default
        };
      });

    let set = v => {
      setState(_ => {
        localStorage->setItem("autoTheme", v->string_of_bool);
        v;
      });
    };

    (state, set);
  };

  let useTheme = (~auto) =>
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
      let systemTheme = prefersDarkMode ? Dark : Light;

      let storedTheme =
        switch (auto) {
        | false => localStorage |> getItem("theme")
        | _ => None
        };

      let (themeName, setThemeName) =
        useState(() =>
          Option.(
            storedTheme->flatMap(fromString)->getWithDefault(systemTheme)
          )
        );

      /**
        If auto is true then this function won't do anything.
        Make auto false to be able to manually change the theme.
       */
      let set = t => {
        switch (auto) {
        | false =>
          setThemeName(_ => {
            localStorage |> setItem("theme", t->toString);
            t;
          })
        | _ => ()
        };
      };

      let theme =
        switch (themeName) {
        | Light => lightTheme
        | Dark => darkTheme
        };

      useEffect3(
        () => {
          switch (auto, storedTheme) {
          | (true, _) => setThemeName(_ => systemTheme)
          | (_, None) => set(systemTheme)
          | _ => ()
          };
          None;
        },
        (auto, storedTheme, prefersDarkMode),
      );

      {theme, themeName, setTheme: set};
    };
};

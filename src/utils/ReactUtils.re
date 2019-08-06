include React;
let str = React.string;
let classNames = (array: array(string)) => Js.Array.joinWith(" ", array);

module Hooks = {
  open Utils;

  let useOnMount = fn => useEffect1(fn, [||]);

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
      open AppStyles;
      open AppStyles.ThemeNames;
      open AppStyles.ThemeStore;
      open DomUtils;

      let canAutoTheme = {
        let supportsDark =
          matchMedia("(prefers-color-scheme: dark)")->matches;
        let supportsLight =
          matchMedia("(prefers-color-scheme: light)")->matches;
        let supportsNoPreferences =
          matchMedia("(prefers-color-scheme: no-preference)")->matches;

        supportsDark || supportsLight || supportsNoPreferences;
      };

      let prefersDarkMode = useMediaQuery("(prefers-color-scheme: dark)");

      let systemTheme =
        switch (canAutoTheme) {
        | false => ThemeNames.default
        | _ => prefersDarkMode ? Dark : Light
        };

      let storedTheme = localStorage |> getItem("theme");
      let initialThemeName =
        Option.(
          storedTheme->flatMap(fromString)->getWithDefault(systemTheme)
        );

      let initialState =
        switch (systemTheme, initialThemeName) {
        | (Light, Auto) => {theme: Theme.lightTheme, themeName: Auto}
        | (Dark, Auto) => {theme: Theme.darkTheme, themeName: Auto}
        | (_, Dark) => {theme: Theme.darkTheme, themeName: Dark}
        | (_, Light) => {theme: Theme.lightTheme, themeName: Light}
        | _ => {theme: Theme.default, themeName: default}
        };

      let (state, dispatch) = store(initialState).useStore();
      let {themeName} = state;

      useOnMount(() => {
        switch (initialThemeName) {
        | Light => dispatch(SwitchToLightTheme)
        | Dark => dispatch(SwitchToDarkTheme)
        | Auto => dispatch(SwitchToAutoTheme)
        };
        None;
      });

      /**
        If auto is true then this function won't do anything.
        Make auto false to be able to manually change the theme.
       */
      let set = t => {
        switch (themeName) {
        | Auto => ()
        | _ =>
          switch (t) {
          | Light => dispatch(SwitchToLightTheme)
          | Dark => dispatch(SwitchToDarkTheme)
          | _ => ()
          };
          localStorage |> setItem("theme", t->toString);
        };
      };

      useEffect3(
        () => {
          switch (themeName, storedTheme, systemTheme) {
          | (Auto, _, Light) => dispatch(AutoSwitchToLight)
          | (Auto, _, Dark) => dispatch(AutoSwitchToDark)
          | (_, None, _) => set(ThemeNames.default)
          | _ => ()
          };
          None;
        },
        (themeName, storedTheme, systemTheme),
      );

      (state, dispatch);
    };
};

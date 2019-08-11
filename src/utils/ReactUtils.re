include React;
let str = React.string;
let classNames = (array: array(string)) =>
  Js.Array.joinWith(" ", array)->String.trim;

module Hooks = {
  open Utils;

  let useOnMount = fn => useEffect1(fn, [||]);

  let useTheme = () => {
    open ReactResponsiveRe;
    open Dom.Storage;
    open AppStyles;
    open AppStyles.ThemeNames;
    open AppStyles.ThemeStore;

    let prefersDarkMode = useMediaQuery("(prefers-color-scheme: dark)");

    let systemTheme =
      switch (canAutoTheme) {
      | false => ThemeNames.default
      | _ => prefersDarkMode ? Dark : Light
      };

    let storedTheme = localStorage |> getItem("theme");
    let initialThemeName =
      Option.(storedTheme->flatMap(fromString)->getWithDefault(systemTheme));

    let (state, dispatch) = store.useStore();
    let {themeName} = state;

    useOnMount(() => {
      switch (initialThemeName) {
      | Light => dispatch(SwitchToLightTheme)
      | Dark => dispatch(SwitchToDarkTheme)
      | Auto => dispatch(SwitchToAutoTheme)
      };
      None;
    });

    let set = t => {
      localStorage |> setItem("theme", t->toString);
      switch (t) {
      | Auto => dispatch(SwitchToAutoTheme)
      | Dark => dispatch(SwitchToDarkTheme)
      | Light => dispatch(SwitchToLightTheme)
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

    (state, set);
  };
};

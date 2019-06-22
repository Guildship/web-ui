open ParcelRe;
ReactDOMRe.renderToElementWithId(<App />, "root");

switch (Js.Nullable.toOption(parcelModule |> hot)) {
| Some(h) => h |> accept()
| _ => ()
};

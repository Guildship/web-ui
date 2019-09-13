ReactDOMRe.renderToElementWithId(
  <AppContainer> <App /> </AppContainer>,
  "root",
);

ParcelRe.(
  switch (Js.Nullable.toOption(parcelModule |> hot)) {
  | Some(h) => h |> accept()
  | _ => ()
  }
);

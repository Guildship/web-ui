open Webapi;

let isInternalLink = href => {
  let hrefOrigin =
    switch (Url.make(href)->Url.origin) {
    | exception _ => None
    | origin => Some(origin)
    };

  let firstCharIsSlash = Js.String.charCodeAt(0, href) == 47.;
  let originIsTheSame =
    Utils.Option.(
      hrefOrigin
      ->map(origin =>
          Js.String.startsWith(origin, Dom.location->Dom.Location.origin)
        )
      ->getWithDefault(false)
    );

  firstCharIsSlash || originIsTheSame;
};

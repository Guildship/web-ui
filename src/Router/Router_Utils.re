open Belt;
open Utils;
open Webapi;

let isInternalLink = href => {
  let hrefOrigin =
    Exceptionable.toOption(() => Url.make(href))->Option.map(Url.origin);

  let firstCharIsSlash = Js.String.charCodeAt(0, href) == 47.;
  let originIsTheSame =
    Option.(
      hrefOrigin
      ->map(origin =>
          Js.String.startsWith(origin, Dom.location->Dom.Location.origin)
        )
      ->getWithDefault(false)
    );

  firstCharIsSlash || originIsTheSame;
};

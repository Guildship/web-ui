open ReactUtils;

[@react.component]
let make = (~href, ~target="", ~className="", ~children=null) => {
  switch (Router.Utils.isInternalLink(href)) {
  | true => <Router.Link className path=href> children </Router.Link>
  | _ => <a className href target> children </a>
  };
};

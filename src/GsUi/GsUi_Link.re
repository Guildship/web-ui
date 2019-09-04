open ReactUtils;

[@react.component]
let make = (~href, ~target="", ~className="", ~children=null) => {
  <GuildshipUi_Text className>
    {switch (Router.Utils.isInternalLink(href)) {
     | true => <Router.Link path=href> children </Router.Link>
     | _ => <a href target> children </a>
     }}
  </GuildshipUi_Text>;
};

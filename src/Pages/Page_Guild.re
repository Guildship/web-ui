open ReactUtils;
open GsUi;
open AppStyles.Theme;
open ReasonUrql.Hooks;

type state = {
  displayName: string,
  createdAt: option(Js.Date.t),
};

[@react.component]
let make = (~id) => {
  module Styles = {
    open Css;

    let wrapper = style([padding(1.0->rem)]);
  };

  let ({displayName, createdAt}, setState) =
    useState(() => {displayName: "", createdAt: None});
  let request = Gs.Guilds.Queries.GetGuild.makeWithVariables({"id": id});
  let ({response}, _) = useQuery(~request, ());
  let parseRequest = data => {
    switch (data##node) {
    | Some(`Guild(d)) =>
      let createdAtTime =
        switch (d##createdAt->Js.Json.decodeString) {
        | Some(s) => s->Js.Date.fromString
        | _ => Js.Date.make()
        };
      setState(_ =>
        {displayName: d##displayName, createdAt: Some(createdAtTime)}
      );
    | _ => ()
    };
  };

  useEffect1(
    () => {
      switch (response) {
      | Data(d) => parseRequest(d)
      | Error(_) => ReasonReactRouter.replace("/404")
      | _ => ()
      };
      None;
    },
    [|response|],
  );

  switch (displayName, createdAt) {
  | (_, Some(date)) =>
    <Pane elevation=Elevation1 className=Styles.wrapper>
      <Heading> displayName->string </Heading>
      <Heading>
        {(
           "Created in the year of "
           ++ date->Js.Date.getFullYear->Js.Float.toString
         )
         ->string}
      </Heading>
    </Pane>
  | _ => null
  };
};

let default = make;

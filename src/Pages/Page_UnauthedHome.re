open ReactUtils;
open GsUi;
open AppStyles.Theme;
open ReasonUrql.Hooks;

[@react.component]
let make = () => {
  module Styles = {
    open Css;

    let wrapper = style([padding2(~h=1.->rem, ~v=zero)]);
    let pane = style([padding(1.0->rem), marginTop(1.0->rem)]);
    let guilds = style([listStyleType(none), margin(zero), padding(zero)]);
  };

  let renderResponse = publicGuilds => {
    Belt.Option.(
      publicGuilds
      ->flatMap(pg => pg##edges)
      ->map(edges =>
          edges
          |> Array.map(e =>
               e
               ->flatMap(edge => edge##node)
               ->map(node => {
                   let id = node##id;
                   <li key=id>
                     <GsUi.Pane elevation=Elevation0 className=Styles.pane>
                       <GsUi.Heading>
                         <Link href={j|/g/$id|j}>
                           {node##displayName->string}
                         </Link>
                       </GsUi.Heading>
                     </GsUi.Pane>
                   </li>;
                 })
               ->getWithDefault(null)
             )
        )
      ->getWithDefault([||])
    );
  };

  let request = Gs.Guilds.Queries.QueryPublicGuilds.make();
  let ({response}, _) = useQuery(~request, ());

  let publicGuilds =
    switch (response) {
    | Data(data) => renderResponse(data##publicGuilds)->array
    | Error(_) => "Error fetching public guilds."->string
    | _ => null
    };

  <div className=Styles.wrapper>
    <Heading size=Heading.S900> "Guildship"->str </Heading>
    <Link href="/me/settings"> <Text> "Go to settings"->str </Text> </Link>
    <GsUi.Pane elevation=Elevation1 className=Styles.pane>
      <Suspense fallback=null> <ThemePickerLazy.Lazy /> </Suspense>
    </GsUi.Pane>
    <GsUi.Pane elevation=Elevation1 className=Styles.pane>
      <Heading size=Heading.S700> "Public Guilds"->str </Heading>
      <ul className=Styles.guilds> publicGuilds </ul>
    </GsUi.Pane>
  </div>;
};

let default = make;

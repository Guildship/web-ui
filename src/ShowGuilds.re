open ReactUtils;

module GetGuilds = [%graphql
  {| {
  guilds(first: 10) {
    edges {
      node {
        id
        displayName
      }
    }
  }
}|}
];

module GuildsQuery = ReasonApolloHooks.Query.Make(GetGuilds);

[@react.component]
let make = () => {
  let (simple, _full) = GuildsQuery.use();

  switch (simple) {
  | Data(data) =>
    Js.log(data);
    null;
  | _ => null
  };
};

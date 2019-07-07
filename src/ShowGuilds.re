open Utils;
open ReactUtils;
open Gql;

module GuildsQueryConfig = [%graphql
  {|
  query {
    guilds(first: 10) {
      edges {
        node {
          id
          displayName
        }
      }
    }
  }
|}
];

module GuildsQuery = Gql.Query(GuildsQueryConfig);

type guild = {
  id: string,
  displayName: string,
};

let getGuilds = res =>
  Option.(
    res##guilds
    ->flatMap(guild => guild##edges)
    ->getWithDefault([||])
    ->Array.map(edge =>
        edge
        ->flatMap(edge => edge##node->map(node => node))
        ->mapWithDefault({id: "", displayName: ""}, node =>
            {
              id: node##id,
              displayName: node##displayName->getWithDefault(""),
            }
          )
      )
  );

[@react.component]
let make = () => {
  let ({response}, _) = GuildsQuery.use();
  switch (response) {
  | Data(data) =>
    data
    ->getGuilds
    ->Array.map(({id, displayName}) => <div key=id> displayName->str </div>)
    ->array
  | NoData => "No data!"->str
  | _ => null
  };
};

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
  let ({loading, response, data}, _refetch) = GuildsQuery.use();
  let _ = inspect2((loading, response, data), "(loading, response, data)");
  <div>
    {switch (response) {
     | Error(err) =>
       switch (err) {
       | GraphQLErrors(e) =>
         e->Array.map(gqlErr => gqlErr##message)->Array.reduce("", (++))->str
       | _ => "HTTP or Fetch error"->str
       }
     | NoData => "No data!"->str
     | Loading => "Loading..."->str
     | Data(data) =>
       switch (data->getGuilds) {
       | [||] => "No guilds!"->str
       | guilds =>
         guilds
         ->Array.map(({id, displayName}) =>
             <div key=id> displayName->str </div>
           )
         ->array
       }
     }}
  </div>;
};

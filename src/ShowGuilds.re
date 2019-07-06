open Utils;
open ReactUtils;

module GetGuilds = [%graphql
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

module GuildsQuery = ReasonApollo.CreateQuery(GetGuilds);

type guild = {
  id: string,
  displayName: string,
};

[@react.component]
let make = () => {
  <GuildsQuery>
    ...{({result}) =>
      switch (result) {
      | Data(res) =>
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
          ->Array.map(guild =>
              <div key={guild.id}> guild.displayName->str </div>
            )
        )
        ->array
      | _ => null
      }
    }
  </GuildsQuery>;
};

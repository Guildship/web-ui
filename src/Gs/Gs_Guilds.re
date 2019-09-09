module Queries = {
  module QueryPublicGuilds = [%graphql
    {|
      query {
        publicGuilds(first: 10) {
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

  module GetGuild = [%graphql
    {|
      query($id: String!) {
        node(id: $id) {
          ...on Guild {
            id
            displayName
            createdAt
          }
        }
      }
    |}
  ];
};

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
};

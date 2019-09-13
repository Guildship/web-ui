/**
 * A simple container that holds all of the "provider"
 * components.
 */

[@react.component]
let make = (~children) =>
  <Gql.Provider value=Gql.client> children </Gql.Provider>;

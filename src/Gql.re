module Provider = ReasonUrql.Provider;

let gqlEndpoint = Env.gsCorePath ++ "/api";
let client = ReasonUrql.Client.make(~url=gqlEndpoint, ());

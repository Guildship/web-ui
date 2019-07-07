open GraphqlHooks;
include GraphqlHooksTypes;

module Provider = Provider;

let gqlEndpoint = Env.gsCorePath ++ "/api";

let memCache = Memcache.make();
let client = Client.make(~url=gqlEndpoint, ~cache=memCache, ());

module Query = GraphqlHooksQuery.Make;

let inMemoryCache = ApolloInMemoryCache.createInMemoryCache();
let httpLink = ApolloLinks.createHttpLink(~uri=Env.gsCorePath ++ "/api", ());
let client =
  ReasonApollo.createApolloClient(~link=httpLink, ~cache=inMemoryCache, ());

open ReasonUrql.Exchanges;
module Provider = ReasonUrql.Provider;

let gqlEndpoint = Env.gsCorePath ++ "/api";

let devExchanges = [|debugExchange|];
let exchanges = [|dedupExchange, cacheExchange, fetchExchange|];

let client =
  ReasonUrql.Client.make(
    ~url=gqlEndpoint,
    ~exchanges=
      /**
       * Only use dev exchanges during development
       */
      {
        switch (Env.nodeEnv) {
        | "development" => Array.append(exchanges, devExchanges)
        | _ => exchanges
        };
      },
    (),
  );

type versionInfo = {
  buildTime: Js.Date.t,
  commitSha: string,
  branchName: string,
};

let dateTimeDecoder = x =>
  x->Js.Json.decodeString->Belt.Option.getExn->Js.Date.fromString;

module Queries = {
  module VersionInfo = [%graphql
    {|
      query {
        versionInfo @bsRecord {
          buildTime @bsDecoder(fn: "dateTimeDecoder")
          commitSha
          branchName
        }
      }
    |}
  ];
};

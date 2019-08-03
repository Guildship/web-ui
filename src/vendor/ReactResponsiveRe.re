[@bs.val] [@bs.module "react-responsive"]
external useMediaQuery: {. "query": string} => bool = "useMediaQuery";

let useMediaQuery = str => useMediaQuery({"query": str});

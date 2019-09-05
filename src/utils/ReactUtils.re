include React;
let str = React.string;
let classNames = (array: array(string)) =>
  Js.Array.joinWith(" ", array)->String.trim;

let component = ReasonReact.statelessComponent("App");

let make = _ => {
  ...component,
  render: _self => {
    <main> "Hello, world!"->ReasonReact.string </main>;
  },
};

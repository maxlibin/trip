open Prelude;

module Css = App_Css;

type state = {route: RouterT.t};

type action =
  | RouterChanged(RouterT.t);

let reducer = (_, action) => {
  switch (action) {
  | RouterChanged(route) => {route: route}
  };
};

[@react.component]
let make = () => {
  let ({route}, dispatch) =
    React.useReducer(reducer, {route: RouterT.Home});
  let url = ReasonReactRouter.useUrl();

  React.useEffect1(
    () => {
      dispatch @@ RouterChanged(url.path->RouterT.cleanPath);
      None;
    },
    [|url|],
  );

  <div className=Css.container>
    {switch (route) {
     | Home => <Home />
     | Itinerary => <Itinerary search={url.search} />
     | NotFound => "Not found"->s
     }}
  </div>;
};
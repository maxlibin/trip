open Prelude;

module Css = Itinerary_Css;

type state = {
  country: CountryT.t,
  itineraries: list(string),
};

type action =
  | GetCountry(CountryT.t)
  | GetItineraries(list(string));

let reducer = (state, action) => {
  switch (action) {
  | GetCountry(country) => {...state, country}
  | GetItineraries(itineraries) => {...state, itineraries}
  };
};

[@react.component]
let make = (~search) => {
  let ({country, itineraries}, dispatch) =
    React.useReducer(reducer, {country: NONE, itineraries: []});

  React.useEffect1(
    () => {
      dispatch @@
      GetCountry(
        search
        |> Js.String.replace("country=", "")
        |> String.lowercase_ascii
        |> Js.Global.decodeURIComponent
        |> Js.String.replace(" ", "-")
        |> CountryT.fromString,
      );

      None;
    },
    [|search|],
  );

  <div>
    <h1 className=Css.title> {country->CountryT.toString->s} </h1>
    {switch (itineraries) {
     | [] => RR.null
     | _ =>
       <ul>
         {itineraries
          ->List.mapWithIndex((idx, itinerary) => {
              <li key={idx->string_of_int}> itinerary->s </li>
            })
          ->RR.list}
       </ul>
     }}
  </div>;
};
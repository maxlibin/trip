open Prelude;

module Css = Itinerary_Css;

type itinerary = {
  index: int,
  value: string,
};

type state = {
  country: CountryT.t,
  itineraries: list(itinerary),
};

type action =
  | GetCountry(CountryT.t)
  | GetItineraries(list(itinerary));

let reducer = (state, action) => {
  switch (action) {
  | GetCountry(country) => {...state, country}
  | GetItineraries(itineraries) => {...state, itineraries}
  };
};

let partialItinerties = (itineraries, index, value) => {
  let (left, right) =
    itineraries->List.partition(({index: indexItinerary}) =>
      indexItinerary < index
    );
  List.concat(left, [value])
  ->List.concat(right->List.keep(iti => iti.index != index));
};

let setItinerties = (value, itineraries, index, dispatch) =>
  switch (index, itineraries->List.get(index)->Option.isNone) {
  | (_, true) =>
    dispatch @@ GetItineraries(itineraries->List.concat([{index, value}]))
  | (0, false) =>
    dispatch @@
    GetItineraries(
      [{index, value}]
      ->List.concat(itineraries->List.keep(item => index != item.index)),
    )
  | (_, false) =>
    dispatch @@
    GetItineraries(itineraries->partialItinerties(index, {index, value}))
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

  <div className=Css.container>
    <h1 className=Css.title> {country->CountryT.toString->s} </h1>
    {switch (itineraries) {
     | [] =>
       <ul className=Css.list>
         <li className=Css.listItem>
           <Editable
             index=0
             onChange={value =>
               value->setItinerties(itineraries, 0, dispatch)
             }
           />
         </li>
       </ul>

     | _ =>
       <ul className=Css.list>
         {itineraries
          ->List.mapWithIndex((idx, itinerary) => {
              <li className=Css.listItem key={idx->string_of_int}>
                <Editable
                  text={itinerary.value}
                  index=idx
                  onChange={value =>
                    value->setItinerties(itineraries, idx, dispatch)
                  }
                />
              </li>
            })
          ->RR.list}
       </ul>
     }}
  </div>;
};
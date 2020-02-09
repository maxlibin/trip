open Prelude;

module Css = Itinerary_Css;

type itinerary = {
  index: int,
  value: string,
};

type inputFocusingEvent =
  | Focus
  | Blur
  | NoEvent;

type state = {
  country: CountryT.t,
  itineraries: list(itinerary),
  inputFocusingEvent,
};

type action =
  | GetCountry(CountryT.t)
  | GetItineraries(list(itinerary))
  | InputFocusingEventChanged(inputFocusingEvent);

let reducer = (state, action) => {
  switch (action) {
  | GetCountry(country) => {...state, country}
  | GetItineraries(itineraries) => {...state, itineraries}
  | InputFocusingEventChanged(inputFocusingEvent) => {
      ...state,
      inputFocusingEvent,
    }
  };
};

let setItinerties = (value, itineraries, index, dispatch) =>
  switch (index, itineraries->List.get(index)->Option.isSome) {
  | (0, false) => dispatch @@ GetItineraries([{index, value}])
  | (_, true) =>
    dispatch @@
    GetItineraries(
      itineraries->List.map(item =>
        index == item.index
          ? {index: item.index, value}
          : {index: item.index, value: item.value}
      ),
    )
  | (_, false) =>
    Js.log("come here");
    Js.log(index);
    dispatch @@ GetItineraries(itineraries->List.concat([{index, value}]));
  };

[@react.component]
let make = (~search) => {
  let ({country, itineraries}, dispatch) =
    React.useReducer(
      reducer,
      {country: NONE, itineraries: [], inputFocusingEvent: NoEvent},
    );

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
             onFocus={_ => dispatch @@ InputFocusingEventChanged(Focus)}
             onBlur={value => {
               value->setItinerties(itineraries, 0, dispatch);
               dispatch @@ InputFocusingEventChanged(Blur);
             }}
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
                  onBlur={value => {
                    Js.log("changed");
                    value->setItinerties(itineraries, idx, dispatch);
                  }}
                />
              </li>
            })
          ->RR.list}
         <li key={itineraries->List.length->string_of_int}>
           <Editable
             index={itineraries->List.length}
             onBlur={value => {
               Js.log("set...");
               value->setItinerties(
                 itineraries,
                 itineraries->List.length,
                 dispatch,
               );
             }}
           />
         </li>
       </ul>
     }}
  </div>;
};
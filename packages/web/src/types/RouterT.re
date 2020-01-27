type t =
  | Home
  | Itinerary
  | NotFound;

let toString =
  fun
  | Home => "Home"
  | Itinerary => "Itinerary"
  | NotFound => "Not found";

let toPathName = r =>
  r->toString->String.lowercase_ascii->Js.String.replace(" ", "");

let fromString =
  fun
  | "home" => Home
  | "itinerary" => Itinerary
  | _ => NotFound;

let cleanPath = path =>
  switch (path) {
  | []
  | ["home"] => Home
  | ["itinerary"] => Itinerary
  | _ => NotFound
  };
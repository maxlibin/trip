let baseUrl = "https://tripdeer-9e870.firebaseio.com/.json?";

module QueryBy = {
  let passport = passport => {j|$(baseUrl)orderBy="Passport"&equalTo="$(passport)"|j};
};

module Fetch = {
  let passport = (passport, fn) => {
    let%Async res = Promise.fetch(passport->QueryBy.passport);
    fn(
      res
      ->Js.Json.decodeObject
      ->Option.mapWithDefault([||], json =>
          Js.Dict.values(json)
          ->Array.map(json =>
              switch (json->CountryT.result_decode) {
              | Ok(res) => res
              | Error(_) => {destination: "", passport: "", code: 999}
              }
            )
          ->Array.keep(country => country.destination != "")
        )
      ->List.fromArray,
    );

    Js.Promise.resolve();
  };
};
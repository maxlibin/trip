let baseUrl = "https://tripdeer-9e870.firebaseio.com/.json?";

module QueryBy = {
  let passport = passport => {j|$(baseUrl)orderBy="Passport"&equalTo="$(passport)"|j};
};

module Fetch = {
  let passport = (passport, fn) => {
    let%Async res = Promise.fetch(passport->QueryBy.passport);
    fn(res->CountryT.results_decode);
    Js.Promise.resolve();
  };
};
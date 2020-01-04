open Prelude;
open CountryT;

module Css = App_Css;

type countryOpt =
  | NoSelection
  | Selected(ReactSelect.Country.opt);

type selection = (countryOpt, countryOpt);
type countries = CountryT.results;

type state = {
  selection,
  countries: option(countries),
};
type action =
  | CountriesFetched(option(countries))
  | SelectOnChanged(selection);

let getCountries =
  countries
  ->List.map(country =>
      {ReactSelect.Country.value: country, label: country->toString}
    )
  ->List.toArray;

let getData = (country: ReactSelect.Country.opt, dispatch) =>
  Api.Fetch.passport(country.label, res =>
    switch (res) {
    | Result.Ok(countries) => dispatch @@ CountriesFetched(Some(countries))
    | Result.Error(_) => ()
    }
  )
  ->ignore;

let onChange = ((from, to_), dispatch) =>
  dispatch @@ SelectOnChanged((from, to_));

let reducer = (state, action) => {
  switch (action) {
  | CountriesFetched(countries) => {...state, countries}
  | SelectOnChanged(selection) => {...state, selection}
  };
};

[@react.component]
let make = () => {
  let ({selection: (from, to_)}, dispatch) =
    React.useReducer(
      reducer,
      {countries: None, selection: (NoSelection, NoSelection)},
    );

  <div className=Css.container>
    <h1 className=Css.heading>
      "Check your visa requirements for these countries."->s
    </h1>
    <form className=Css.form>
      <div className=Css.field>
        <span className=Css.search> <Search /> </span>
        <ReactSelect.Country
          name="from"
          className=Css.select
          options=getCountries
          onChange={country => (Selected(country), to_)->onChange(dispatch)}
        />
        <ReactSelect.Country
          name="to"
          className=Css.select
          options=getCountries
          onChange={country =>
            (from, Selected(country))->onChange(dispatch)
          }
        />
      </div>
    </form>
  </div>;
};
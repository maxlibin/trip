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

let fetchData = (country: ReactSelect.Country.opt, dispatch) =>
  Api.Fetch.passport(country.label, res =>
    dispatch @@ CountriesFetched(Some(res))
  )
  ->ignore;

let getData = (countries, to_) => {
  countries->List.getBy((country: CountryT.result) =>
    country.destination == to_
  );
};

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
  let ({countries, selection: (from, to_)}, dispatch) =
    React.useReducer(
      reducer,
      {countries: None, selection: (NoSelection, NoSelection)},
    );

  <div className=Css.container>
    <h1 className=Css.heading> "Check your visa requrement"->s </h1>
    <h2 className=Css.subHeading>
      "Check visa requirement over 199 counties by selecting your country and countries that you like to visit."
      ->s
    </h2>
    <form className=Css.form>
      <div className=Css.field>
        <span className=Css.search> <Search /> </span>
        <ReactSelect.Country
          name="from"
          className=Css.select
          options=getCountries
          onChange={country => {
            (Selected(country), to_)->onChange(dispatch);
            country->fetchData(dispatch);
          }}
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
    {switch (from, to_, countries) {
     | (Selected(_), Selected(to_), Some(countries)) =>
       countries
       ->getData(to_.label)
       ->Option.mapWithDefault(RR.null, (data: CountryT.result) =>
           <div className=Css.result>
             {data.code->CountryT.visaFromInt->visaToString->s}
           </div>
         )
     | _ => RR.null
     }}
  </div>;
};
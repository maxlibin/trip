open Prelude;
open CountryT;

module Css = App_Css;

let getCountries =
  countries
  ->List.map(country =>
      {ReactSelect.Country.value: country, label: country->toString}
    )
  ->List.toArray;

[@react.component]
let make = () => {
  React.useEffect0(() => {
    {
      let%Async res = Promise.fetch("./countries.json");
      // let x = Js.log(res->countries_decode);
      // Js.log(x->List.fromArray);

      Js.Promise.resolve(res);
    }
    ->ignore;
    None;
  });
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
        />
        <ReactSelect.Country
          name="to"
          className=Css.select
          options=getCountries
        />
      </div>
    </form>
  </div>;
};
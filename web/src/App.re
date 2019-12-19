open Prelude;

module Css = App_Css;

[@react.component]
let make = () =>
  <div className=Css.container>
    <h1> "Check your visa requirements for these countries."->s </h1>
    <form className=Css.form>
      <div className=Css.field>
        <span className=Css.search> <Search /> </span>
        <input type_="text" />
        <input type_="text" />
      </div>
    </form>
  </div>;
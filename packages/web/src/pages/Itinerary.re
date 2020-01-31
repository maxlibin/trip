open Prelude;

[@react.component]
let make = (~search) => {
  let country =
    React.useMemo1(
      () => {
        switch (
          search
          |> Js.String.replace("country=", "")
          |> String.lowercase_ascii
          |> Js.String.replace(" ", "-")
          |> CountryT.fromString
        ) {
        | CountryT.NONE => ""
        | _ => Js.String.replace("country=", "", search)
        }
      },
      [|search|],
    );

  <div> <h1> country->s </h1> <h2> "Day 1"->s </h2> </div>;
};
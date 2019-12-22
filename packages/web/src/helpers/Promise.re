open Js.Promise;

let fetch = url =>
  Fetch.fetch(url)
  |> then_(Fetch.Response.json)
  |> then_(json => json |> resolve);
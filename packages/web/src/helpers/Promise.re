open Js.Promise;

let fetch = url => {
  Js.log(url->Js.Global.decodeURIComponent);
  Fetch.fetch(url->Js.Global.decodeURIComponent)
  |> then_(Fetch.Response.json)
  |> then_(json => json |> resolve);
};
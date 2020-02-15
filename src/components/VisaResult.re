open Prelude;
module Css = VisaResult_Css;

[@react.component]
let make =
    (~children, ~to_: option(ReactSelect.Country.opt)=?, ~noResult=false) => {
  <div className=Css.result>
    children
    {!noResult
       ? <>
           <div className=Css.airline> <Airline /> </div>
           <Button
             className=Css.button
             onClick={_ =>
               ReasonReactRouter.push(
                 "/itinerary"
                 ++ to_->Option.mapWithDefault("", to_ =>
                      Printf.sprintf("?country=%s", to_.label)
                    ),
               )
             }>
             "Create your itinerary"->s
           </Button>
         </>
       : RR.null}
  </div>;
};
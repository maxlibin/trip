open Prelude;
module Css = VisaResult_Css;

[@react.component]
let make = (~children, ~noResult=false) => {
  <div className=Css.result>
    children
    {!noResult
       ? <>
           <div className=Css.airline> <Airline /> </div>
           <Button
             className=Css.button
             onClick={_ => ReasonReactRouter.push("/itinerary")}>
             "Create your itinerary"->s
           </Button>
         </>
       : RR.null}
  </div>;
};
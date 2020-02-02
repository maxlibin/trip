open Prelude;

module Css = Editable_Css;

[@react.component]
let make = (~text=?, ~index) =>
  <div className=Css.editable>
    <span className=Css.day>
      {("Day " ++ (index + 1)->string_of_int)->s}
    </span>
    <span className=Css.placeHolder> "Add your itinerary"->s </span>
    <div
      className=Css.editableContent
      contentEditable=true
      onInput={e => Js.log(e)}
      suppressContentEditableWarning=true>
      {text->Option.getWithDefault("")->s}
    </div>
  </div>;
open Prelude;

module Css = Editable_Css;

[@react.component]
let make =
    (~text=?, ~index, ~onChange=_ => (), ~onBlur=_ => (), ~onFocus=_ => ()) =>
  <div className=Css.editable>
    <span className=Css.day>
      {("Day " ++ (index + 1)->string_of_int)->s}
    </span>
    {switch (text) {
     | Some(text) when text != "" => RR.null
     | _ => <span className=Css.placeHolder> "Add your itinerary"->s </span>
     }}
    <div
      className=Css.editableContent
      contentEditable=true
      onFocus
      onInput={e => {onChange(ReactEvent.Synthetic.target(e)##innerText)}}
      onBlur={e => {onBlur(ReactEvent.Synthetic.target(e)##innerText)}}
      suppressContentEditableWarning=true>
      {text->Option.getWithDefault("")->s}
    </div>
  </div>;
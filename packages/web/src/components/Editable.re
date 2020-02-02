open Prelude;

module Css = Editable_Css;

let handleOnChange = (e, onChange) => {
  let value = ReactEvent.Synthetic.target(e)##innerText;

  onChange(value);
};

[@react.component]
let make = (~text=?, ~index, ~onChange) =>
  <div className=Css.editable>
    <span className=Css.day>
      {("Day " ++ (index + 1)->string_of_int)->s}
    </span>
    <span className=Css.placeHolder> "Add your itinerary"->s </span>
    <div
      className=Css.editableContent
      contentEditable=true
      onInput={e => handleOnChange(e, onChange)}
      onBlur={e => handleOnChange(e, onChange)}
      suppressContentEditableWarning=true>
      {text->Option.getWithDefault("")->s}
    </div>
  </div>;
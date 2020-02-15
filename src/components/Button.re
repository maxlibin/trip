module Css = Button_Css;

[@react.component]
let make = (~className=?, ~onClick=?, ~children) => {
  <button ?onClick className={Cn.make([Css.button, className->Cn.unpack])}>
    children
  </button>;
};
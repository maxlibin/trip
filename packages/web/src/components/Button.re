module Css = Button_Css;

[@react.component]
let make = (~className=?, ~children) => {
  <button className={Cn.make([Css.button, className->Cn.unpack])}>
    children
  </button>;
};
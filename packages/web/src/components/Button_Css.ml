open Emotion
open StyleVars

let button = [%css [
  backgroundColor Color.primary;
  borderRadius (`px 3);
  display `inlineBlock;
  borderWidth `zero;
  outlineWidth `zero;
  color Css.Color.white;
  padding2 (`px 10) (`px 20);
  fontSize (`px 14);
  fontWeight 300;
  cursor `pointer;

  hover [
    backgroundColor Color.primaryHover;
  ];

  active [
    backgroundColor Color.primaryActive;
  ]
]]
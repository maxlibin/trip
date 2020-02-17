open Emotion

open StyleVars

let container = [%css [
  
]]

let title = [%css [
  marginBottom (`px 40);
  fontWeight 900;
  fontSize (`px 28);
  display `flex;
  alignItems `center;
]]

let list = [%css [
  listStyleType `none;
]]

let listItem = [%css [
  margin `zero;
  padding4 `zero `zero (`px 40) (`px 20);
  position `relative;

  after [
    content "";
    borderLeft (`px 3) `solid (`hex "e4e4e4");
    position `absolute;
    left (`px (-15));
    height (`pct 100.);
    top `zero;
  ];

  before [
    content "";
    position `absolute;
    left (`px (-20));
    display `block;
    width (`px 14);
    height (`px 14);
    top `zero;
    backgroundColor Color.primary;
    borderRadius (`pct 50.);
    zIndex 1;
  ]
]]

let backIcon = [%css [
  marginRight (`px 15);
  marginLeft (`px (- 20));
  width (`px 24);
  height (`px 24);
  opacity 0.7;
  cursor `pointer;

  hover [
    opacity 1.;
  ]
]]
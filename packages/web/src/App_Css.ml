open Emotion
open StyleVars

let container = [%css [
  maxWidth (`px 590);
  width (`pct 100.);
]]

let heading = [%css [
  fontSize (`px 20);
  paddingBottom (`px 20);
]]

let form = [%css [
  backgroundColor Css.Color.white;
  padding (`px 6);
  borderRadius (`px 8);
  border (`px 2) `solid (`rgba(0,0,0, 0.05));
  boxShadow ~x:`zero ~y:(`px 2) ~blur:(`px 3) ~spread: `zero ~inset:false (`rgba(0,0,0, 0.1));
  backgroundClip `paddingBox;

  select "[class$=\"control\"]" [
    borderWidth `zero;
    boxShadow `transparent;
    cursor `pointer;
  ];

  select "[class$=\"placeholder\"], [class$=\"singleValue\"], [class$=\"indicatorContainer\"]" [
    color Color.primary;
  ];

  select "[class$=\"indicatorSeparator\"]" [
    backgroundColor Color.primary;
  ]
]]

let field = [%css [
  border (`px 2) `solid Color.primary;
  borderRadius (`px 6);
  minHeight (`px 30);
  display `flex;
  alignItems `center;
  padding (`px 4);
]]

let search = [%css [
  backgroundColor Color.primary;
  padding (`px 11);
  borderRadius (`px 4);
  display `flex;
  alignItems `center;
  marginRight (`px 4);
  marginLeft (`px 4);
]]

let select = [%css [
  flexGrow 1.;
]]

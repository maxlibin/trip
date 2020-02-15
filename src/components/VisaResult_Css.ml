open Emotion
open StyleVars

let result = [%css [
  marginTop (`px 10);
  backgroundColor Css.Color.white;
  padding (`px 20);
  borderRadius (`px 8);
  boxShadow ~x:`zero ~y:(`px 2) ~blur:(`px 3) ~spread: `zero ~inset:false (`rgba(0,0,0, 0.1));
  backgroundClip `paddingBox;
  position `relative;
  fontSize (`px 16);
  color Color.primary;
  textAlign `center;
  fontWeight 900;
]]

let airline = [%css [
  display `block;
  position `absolute;
  top (`px (50));
  left (`px 8);
  width (`calc(`sub, (`pct 100.), (`px 16)));
  textAlign `right;

  after [
    content "";
    position `absolute;
    left `zero;
    top (`px 8);
    width (`pct 100.);
    borderBottom (`px 1) `dashed Css.Color.black;
    opacity 0.1;
  ]
]]

let button = [%css [
  marginTop (`px 40);
  display `block;
  marginLeft `auto;
  marginRight `auto;
]]
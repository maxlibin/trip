open Emotion
open StyleVars

let container = [%css [
  maxWidth (`px 590);
  width (`pct 100.);

  select "h1, h2, h3, h4, h5, h6" [
    fontFamily  "Roboto, sans-serif"; 
    fontWeight 500;
    margin `zero;
    padding `zero;
   
  ];

  select "h1" [
    fontSize (`px 28);
  ]
]]

let form = [%css [
  backgroundColor Css.Color.white;
  padding (`px 6);
  borderRadius (`px 8);
  border (`px 1) `solid (`rgba(0,0,0, 0.05));
  boxShadow ~x:`zero ~y:(`px 2) ~blur:(`px 3) ~spread: `zero ~inset:false (`rgba(0,0,0, 0.1));
  backgroundClip `paddingBox;
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
  padding (`px 6);
  borderRadius (`px 4);
  display `flex;
  alignItems `center;
]]
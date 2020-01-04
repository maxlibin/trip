open Emotion
open StyleVars

let container = [%css [
  maxWidth (`px 590);
  width (`pct 100.);
]]

let heading = [%css [
  fontSize (`px 20);
  fontWeight 700;
  paddingBottom (`px 10);
  textAlign `center;
  color Color.primary;
]]

let subHeading = [%css [
  fontSize (`px 16);
  fontWeight 500;
  textAlign `center;
  color Color.primary;
  opacity 0.6;
  padding3 `zero (`px 40) (`px 40);
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

  select "[class*=\"select\"]" [
    firstOfType [
      select "> div[class$=\"control\"]" [
        after [
          content "From";
          position `absolute;
          top (`px 13);
          fontSize (`px 9);
          fontWeight 700;
          right (`px 56);
          opacity 0.6;
          color Color.primary;
        ]
      ]
    ];

    lastOfType [
      select "> div[class$=\"control\"]" [
        after [
          content "To";
          position `absolute;
          top (`px 13);
          fontSize (`px 9);
          fontWeight 700;
          right (`px 56);
          opacity 0.6;
          color Color.primary;
        ]
      ]
    ];
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

let result = [%css [
  marginTop (`px 20);
  backgroundColor Css.Color.white;
  padding (`px 20);
  borderRadius (`px 8);
  border (`px 2) `solid (`rgba(0,0,0, 0.05));
  boxShadow ~x:`zero ~y:(`px 2) ~blur:(`px 3) ~spread: `zero ~inset:false (`rgba(0,0,0, 0.1));
  backgroundClip `paddingBox;
]]
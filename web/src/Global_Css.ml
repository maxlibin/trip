open Emotion;;

begin
  global "html, body" [
    margin `zero;
    padding `zero;
    minHeight (pct 100.);
    height (pct 100.);
    fontFamily "Helvetica Neue,Helvetica,Arial,sans-serif";
    color (`hex "333");
  ];

  global {|#root|} [
    display `flex;
    justifyContent `center;
    alignItems `center;
    height (pct 100.);
    backgroundColor (`hex "e9e9e9");
  ];
end
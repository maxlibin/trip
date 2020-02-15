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
    backgroundColor (`hex "f5f5f5");
  ];

  global "h1, h2, h3, h4, h5, h6" [
    fontFamily  "Roboto, sans-serif"; 
    fontWeight 500;
    margin `zero;
    padding `zero;
  ];
end
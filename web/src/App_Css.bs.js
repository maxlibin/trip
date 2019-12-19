'use strict';

var Emotion = require("@ahrefs/bs-emotion/src/Emotion.bs.js");
var StyleVars$Tripdeer = require("./StyleVars.bs.js");

var container = Emotion.css(undefined, /* :: */[
      Emotion.label("container"),
      /* :: */[
        Emotion.maxWidth(/* `px */[
              25096,
              590
            ]),
        /* :: */[
          Emotion.width(/* `pct */[
                5591841,
                100
              ]),
          /* :: */[
            Emotion.select("h1, h2, h3, h4, h5, h6", /* :: */[
                  Emotion.fontFamily("Roboto, sans-serif"),
                  /* :: */[
                    Emotion.fontWeight(500),
                    /* :: */[
                      Emotion.margin(/* zero */-789508312),
                      /* :: */[
                        Emotion.padding(/* zero */-789508312),
                        /* [] */0
                      ]
                    ]
                  ]
                ]),
            /* :: */[
              Emotion.select("h1", /* :: */[
                    Emotion.fontSize(/* `px */[
                          25096,
                          28
                        ]),
                    /* [] */0
                  ]),
              /* [] */0
            ]
          ]
        ]
      ]
    ]);

var form = Emotion.css(undefined, /* :: */[
      Emotion.label("form"),
      /* :: */[
        Emotion.backgroundColor(Emotion.Css.Color.white),
        /* :: */[
          Emotion.padding(/* `px */[
                25096,
                6
              ]),
          /* :: */[
            Emotion.borderRadius(/* `px */[
                  25096,
                  8
                ]),
            /* :: */[
              Emotion.border(/* `px */[
                    25096,
                    1
                  ], /* solid */12956715, /* `rgba */[
                    -878128972,
                    /* tuple */[
                      0,
                      0,
                      0,
                      0.05
                    ]
                  ]),
              /* :: */[
                Emotion.boxShadow(/* zero */-789508312, /* `px */[
                      25096,
                      2
                    ], /* `px */[
                      25096,
                      3
                    ], /* zero */-789508312, false, /* `rgba */[
                      -878128972,
                      /* tuple */[
                        0,
                        0,
                        0,
                        0.1
                      ]
                    ]),
                /* :: */[
                  Emotion.backgroundClip(/* paddingBox */972575930),
                  /* [] */0
                ]
              ]
            ]
          ]
        ]
      ]
    ]);

var field = Emotion.css(undefined, /* :: */[
      Emotion.label("field"),
      /* :: */[
        Emotion.border(/* `px */[
              25096,
              2
            ], /* solid */12956715, StyleVars$Tripdeer.Color.primary),
        /* :: */[
          Emotion.borderRadius(/* `px */[
                25096,
                6
              ]),
          /* :: */[
            Emotion.minHeight(/* `px */[
                  25096,
                  30
                ]),
            /* :: */[
              Emotion.display(/* flex */-1010954439),
              /* :: */[
                Emotion.alignItems(/* center */98248149),
                /* :: */[
                  Emotion.padding(/* `px */[
                        25096,
                        4
                      ]),
                  /* [] */0
                ]
              ]
            ]
          ]
        ]
      ]
    ]);

var search = Emotion.css(undefined, /* :: */[
      Emotion.label("search"),
      /* :: */[
        Emotion.backgroundColor(StyleVars$Tripdeer.Color.primary),
        /* :: */[
          Emotion.padding(/* `px */[
                25096,
                6
              ]),
          /* :: */[
            Emotion.borderRadius(/* `px */[
                  25096,
                  4
                ]),
            /* :: */[
              Emotion.display(/* flex */-1010954439),
              /* :: */[
                Emotion.alignItems(/* center */98248149),
                /* [] */0
              ]
            ]
          ]
        ]
      ]
    ]);

exports.container = container;
exports.form = form;
exports.field = field;
exports.search = search;
/* container Not a pure module */

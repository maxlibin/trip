'use strict';

var React = require("react");
var ReactDOMRe = require("reason-react/src/ReactDOMRe.js");
var App$Tripdeer = require("./App.bs.js");
var Global_Css$Tripdeer = require("./Global_Css.bs.js");

ReactDOMRe.renderToElementWithId(React.createElement(App$Tripdeer.make, { }), "root");

/*  Not a pure module */

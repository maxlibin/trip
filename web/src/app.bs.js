'use strict';

var React = require("react");
var Search$Tripdeer = require("./components/icons/Search.bs.js");
var App_Css$Tripdeer = require("./App_Css.bs.js");
var Prelude$Tripdeer = require("./helpers/Prelude.bs.js");

function App(Props) {
  return React.createElement("div", {
              className: App_Css$Tripdeer.container
            }, React.createElement("h1", undefined, Prelude$Tripdeer.s("Check your visa requirements for these countries.")), React.createElement("form", {
                  className: App_Css$Tripdeer.form
                }, React.createElement("div", {
                      className: App_Css$Tripdeer.field
                    }, React.createElement("span", {
                          className: App_Css$Tripdeer.search
                        }, React.createElement(Search$Tripdeer.make, { })), React.createElement("input", {
                          type: "text"
                        }), React.createElement("input", {
                          type: "text"
                        }))));
}

var Css = /* alias */0;

var make = App;

exports.Css = Css;
exports.make = make;
/* react Not a pure module */

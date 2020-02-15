// Generated by BUCKLESCRIPT, PLEASE EDIT WITH CARE

import * as $$String from "bs-platform/lib/es6/string.js";

function toString(param) {
  switch (param) {
    case /* Home */0 :
        return "Home";
    case /* Itinerary */1 :
        return "Itinerary";
    case /* NotFound */2 :
        return "Not found";
    
  }
}

function toPathName(r) {
  return "".replace($$String.lowercase_ascii(toString(r)), " ");
}

function fromString(param) {
  switch (param) {
    case "home" :
        return /* Home */0;
    case "itinerary" :
        return /* Itinerary */1;
    default:
      return /* NotFound */2;
  }
}

function cleanPath(path) {
  if (path) {
    switch (path[0]) {
      case "home" :
          if (path[1]) {
            return /* NotFound */2;
          } else {
            return /* Home */0;
          }
      case "itinerary" :
          if (path[1]) {
            return /* NotFound */2;
          } else {
            return /* Itinerary */1;
          }
      default:
        return /* NotFound */2;
    }
  } else {
    return /* Home */0;
  }
}

export {
  toString ,
  toPathName ,
  fromString ,
  cleanPath ,
  
}
/* No side effect */

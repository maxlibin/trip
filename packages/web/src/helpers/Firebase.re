type options = {
  apiKey: string,
  authDomain: string,
  databaseURL: string,
  projectId: string,
  storageBucket: option(string),
  messagingSenderId: option(string),
  appId: string,
};

module App = {
  type t;
};

[@bs.module "firebase"]
external initializeApp: (~options: options) => App.t = "initializeApp";
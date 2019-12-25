type options = {
  apiKey: string,
  authDomain: string,
  databaseURL: string,
  projectId: string,
  storageBucket: string,
  messagingSenderId: string,
  appId: string,
};

module App = {
  type t;
};

[@bs.module "firebase"]
external initializeApp: (~options: options) => App.t = "initializeApp";
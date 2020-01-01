include Global_Css;

let options = {
  Firebase.apiKey: EnvHelper.Firebase.apiKey,
  authDomain: EnvHelper.Firebase.authDomain,
  projectId: EnvHelper.Firebase.projectId,
  databaseURL: EnvHelper.Firebase.databaseUrl,
  appId: EnvHelper.Firebase.appId,
  storageBucket: None,
  messagingSenderId: None,
};

Firebase.initializeApp(~options);

ReactDOMRe.renderToElementWithId(<App />, "root");
include Global_Css;

let options = {
  Firebase.apiKey: EnvHelper.Firebase.apiKey,
  authDomain: EnvHelper.Firebase.authDomain,
  projectId: EnvHelper.Firebase.projectId,
  databaseURL: EnvHelper.Firebase.databaseUrl,
  storageBucket: EnvHelper.Firebase.storageBucket,
  messagingSenderId: EnvHelper.Firebase.senderId,
  appId: EnvHelper.Firebase.appId,
};

Firebase.initializeApp(~options);

ReactDOMRe.renderToElementWithId(<App />, "root");
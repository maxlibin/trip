[@bs.val] external firebaseApiKey: string = "process.env.FIREBASE_API_KEY";
[@bs.val]
external firebaseAuthDomain: string = "process.env.FIREBASE_AUTHDOMAIN";
[@bs.val]
external firebaseDatabaseUrl: string = "process.env.FIREBASE_DATABASE_URL";
[@bs.val]
external firebaseProjectId: string = "process.env.FIREBASE_PROJECT_ID";
[@bs.val]
external firebaseStorageBucket: string = "process.env.FIREBASE_STORAGE_BUCKET";
[@bs.val]
external firebaseSenderId: string = "process.env.FIREBASE_MESSAING_SENDER_ID";
[@bs.val] external firebaseAppId: string = "process.env.FIREBASE_APP_ID";

module Firebase = {
  let apiKey = firebaseApiKey;
  let authDomain = firebaseAuthDomain;
  let databaseUrl = firebaseDatabaseUrl;
  let projectId = firebaseProjectId;
  let storageBucket = firebaseStorageBucket;
  let senderId = firebaseSenderId;
  let firebaseAppId = firebaseSenderId;
  let appId = firebaseAppId;
};
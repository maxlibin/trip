import { combineReducers } from "redux";
import tripReducer from "./Trips";
const allReducers = combineReducers({
  count: tripReducer
});
export default allReducers;

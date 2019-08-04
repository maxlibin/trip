const initialState = {};

export default function reducer(state = initialState, action) {
  switch (action.type) {
    case GET_REPOS:
      return { ...state, loading: true };
    default:
      return state;
  }
}

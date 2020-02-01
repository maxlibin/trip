module RR = {
  include ReasonReact;

  let list = l => l->List.toArray->ReasonReact.array;
};

let s = RR.string;
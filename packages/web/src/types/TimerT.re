open Printf;

type t = int;

let hours = List.makeBy(24, i => i);
let miniutes = List.makeBy(60, i => i);

let stringOfHour12 =
  fun
  | n when n < 12 => sprintf("%s AM", n->string_of_int)
  | n => sprintf("%s PM", (n - 12)->string_of_int);

let stringOfHour24 = h => h->string_of_int;
let timeToString = t => t->string_of_int;
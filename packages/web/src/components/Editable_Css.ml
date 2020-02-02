open Emotion

let day = [%css [
  position `absolute;
  outlineWidth `zero;
  fontSize (`px 18);
  left (`px (-170));
  width (`px 150);
  textAlign `right;
  fontWeight 900;
  color (`rgba(0,0,0, 0.3));
]]

let placeHolder = [%css [
  position `absolute;
  color (`rgba(0,0,0, 0.3));
  zIndex 0;
]]

let editable = [%css [
  position `relative;
  fontSize (`px 18);
  fontWeight 300;
]]

let editableContent = [%css [
  outlineWidth `zero;
  position `relative;
  zIndex 1;
]]

[@bs.module "./App.js"] external reactClass : ReasonReact.reactClass = "default";

let make = (children) => ReasonReact.wrapJsForReason(~props=Js.Obj.empty(), ~reactClass, children);

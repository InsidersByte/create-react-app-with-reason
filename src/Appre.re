type esModule = Js.t {. default : ReasonReact.reactClass};

external app : esModule = "./App.js" [@@bs.module];

let make children =>  
  ReasonReact.wrapJsForReason
    props::(Js.Obj.empty ()) 
    reactClass::app##default
    children;
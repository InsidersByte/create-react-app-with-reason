[%bs.raw {|require('./index.css')|}];

external register_service_worker : unit => unit =  
  "default" [@@bs.module "./registerServiceWorker"];

ReactDOMRe.renderToElementWithId <Appre /> "root";

register_service_worker (); 
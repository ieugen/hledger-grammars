(ns app.monaco
  (:require [reagent.core :as r]
            ["@monaco-editor/react" :as Editor]
            ["react-spinners-kit" :rename {FillSpinner Loader}]))

(defn editor []
  [:<>
   [:> Editor/default {:height "90vh" :languge "javascript"}]])


(comment 
  
  (js/console.log "Hello man")
  
  (js/alert "Am zis salut bah!")
  
  0)
(ns app.core
  "This namespace contains your application and is the entrypoint for 'yarn start'."
  (:require [reagent.dom :as r]
            [app.monaco :refer [editor]]))

(defn ^:dev/after-load render
  "Render the toplevel component for this app."
  []
  (r/render [editor] (.getElementById js/document "app")))

(defn ^:export main
  "Run application startup logic."
  []
  (render))

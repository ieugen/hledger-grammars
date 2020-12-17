(ns ieugen.hledger.timeclock
  (:require [clj-antlr.core :as antlr]
            [clojure.pprint :as pp]))

;; 
;; https://www.emacswiki.org/emacs/TimeClock
;; https://www.ledger-cli.org/#Time-Keeping
;; https://hledger.org/timeclock.html
;; 

(defn load-grammar [path]
  (antlr/parser path))

(def tclock (load-grammar "grammars/timeclock.g4"))

(defn run []
  (println (System/getenv))
  (pp/pprint (tclock "[1,2,3]")))

(comment 
  
  (println (System/getProperty "user.dir"))
  
  (let [tclock (antlr/parser "grammars/timeclock.g4")]
    ;; (tclock "")
    (tclock (slurp "test/samples/sample.timeclock"))
    )
  
  0)

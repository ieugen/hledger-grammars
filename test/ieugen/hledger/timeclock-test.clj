(ns ieugen.hledger.timeclock-test
  (:require [clojure.test :refer :all]
            [ieugen.hledger.timeclock :as tclock]))

(def t (tclock/load-grammar "grammars/timeclock.g4")) 

(deftest empty-grammar
  (testing "Empty grammer is parsed ok"
    (is (= '(:journal) (t "")))))

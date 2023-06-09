(ns ieugen.hledger.timeclock-test
  (:require [clojure.test :refer :all]
            [clojure.edn :as edn]
            [ieugen.hledger.timeclock :as tc]))

(deftest timecklock-grammer-simple
  (testing "Simple grammars: empty, comments, etc"
    (is (= '(:journal) (tc/tclock "")))
    (is (= '(:journal) (tc/tclock "; Un comentariu")))
    (is (= '(:journal) (tc/tclock (slurp "test/samples/empty.timeclock"))))
    (is (= '(:journal) (tc/tclock (slurp "test/samples/comments.timeclock")))))
  (testing "Grammars with transactions"
    (is (= (edn/read-string (slurp "test/samples/sample.timeclock.expected.edn")) (tc/tclock (slurp "test/samples/sample.timeclock"))))
    (is (= (edn/read-string (slurp "test/samples/sample.other.timeclock.expected.edn")) (tc/tclock (slurp "test/samples/sample.other.timeclock"))))
    (is (= (edn/read-string (slurp "test/samples/basic-01.timeclock.expected.edn")) (tc/tclock (slurp "test/samples/basic-01.timeclock"))))
    (is (= (edn/read-string (slurp "test/samples/basic-01.other.timeclock.expected.edn")) (tc/tclock (slurp "test/samples/basic-01.other.timeclock"))))))


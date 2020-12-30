(ns ieugen.hledger.timeclock
  (:import clj_antlr.ParseError
           (org.antlr.v4 Tool)
           (org.antlr.v4.tool Grammar LexerGrammar Rule)           
           (org.antlr.v4.runtime Lexer
                                 LexerInterpreter
                                 ParserInterpreter
                                 CharStreams
                                 CommonTokenStream)
           (org.antlr.v4.runtime.tree ParseTree
                                      ParseTreeWalker))
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

    (let [t (antlr/parser "grammars/Timeclock.g4")
        input "test/samples/sample.timeclock"
        output (str input ".expected.edn")
        source (slurp input)
        parsed (t source)]
    ;; (spit output parsed)
    parsed)
  
  (let [t (antlr/parser "grammars/TimeclockLexer.g4" "grammars/TimeclockParser.g4" {})
        input "test/samples/sample.timeclock"
        output (str input ".expected.edn")
        source (slurp input)
        parsed (t source)]
    ;; (spit output parsed)
    parsed)
  
  (let [^LexerGrammar lg (LexerGrammar. (slurp "grammars/TimeclockLexer.g4"))
        ^Grammar g (Grammar. (slurp "grammars/TimeclockParser.g4") lg)
        input (slurp "test/samples/comments.timeclock")
        lexEngine (^LexerInterpreter .createLexerInterpreter lg (CharStreams/fromString input))
        tokens (CommonTokenStream. lexEngine)
        ^ParserInterpreter parser (.createParserInterpreter g tokens)
        tree (.parse parser (-> g (.rules) (^Rule .get "journal") (.index)))]
    ;; (println input)
    (.toStringTree tree parser)
    )

  0)

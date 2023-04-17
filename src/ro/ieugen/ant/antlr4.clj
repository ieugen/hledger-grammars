; 
(ns ro.ieugen.ant.antlr4
  (:require [czlab.cljant.antlib :as a]))

(defn sample [x]
  (println "Hello " x))

(defn compileAndRun [srcDir destDir]
  (a/run*
   (a/javac
    {:srcdir srcDir
     :destdir destDir
     :target "8"
     :executable "/bin/javac"
     :debugLevel "lines,vars,source"
     :includeantruntime false
     :debug true
     :fork true}
    [[:compilerarg {:line "-Xlint:deprecation"}]
     [:include {:name "**/*.java"}]
     [:classpath
      [[:path {:location "/dev/classes"}]
       [:fileset {:dir "/home/joe/maven"
                  :includes {:name "**/*.jar"}}]]]])
   (a/sleep {:seconds "2"})
   (a/java
    {:classname "demo.App"
     :fork true
     :failonerror true}
    [[:arg {:value "argvalue1"}]
     [:classpath
      [[:path {:location destDir}]]]])
   (a/sleep {:seconds "2"})))


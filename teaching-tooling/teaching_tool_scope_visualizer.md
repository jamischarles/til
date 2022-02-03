# Teaching tool: Scope visualizer


## Possible solve
### A)
Use ASTs to analyze the code.
Wrap each var call with an eval (or move them into every function in the area). 
Then have it `CALL` home to our code, that will generate a report of which are
undefined and which aren't.
Then our HTML/JS visualizes the report by attaching some coloring / annotations
to each var call...

Q: Could we do the same for hoisting? (or do we need an interpreter for that?)

### B)
Use a JS interpreter written in JS?


https://javascript.plainenglish.io/modding-web-apps-with-asts-5a7ac7d1f65d


## Interesting
https://js-scope-visualizer.firebaseapp.com/#visualizer


## Reading
Closure
https://developer.mozilla.org/en-US/docs/Web/JavaScript/Closures

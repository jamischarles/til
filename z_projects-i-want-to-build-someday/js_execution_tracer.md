# JS Execution tracer
Use similar technique as istanbul?

Push a big array or object that will show you when something is executed?
Bonus for capturing local vars and snapshot of the point in time when it ran...

... iiiinteresting...

Q: How could we visualize this?

Could be interesting to visualize how a function is parsed? TODO: look at the JS
interpreter for that...

And then generate a flamegraph maybe...?
https://nodejs.org/en/docs/guides/diagnostics-flamegraph/

https://stjs.tech/code-generator/



interesting reading:
https://antoinevastel.com/javascript/2019/06/10/monitor-js-execution.html
https://github.com/antoinevastel/blog-post-monitor-js/blob/master/monitorExecution.js


Could I write some sort of automated spy? Written in wasm? That captured and
profiled everything running in the browser at the time?



### Code instrumentor
jscodeshift (fb codemods)
https://www.npmjs.com/package/astring (turn AST back to JS)
https://github.com/estools/escodegen `JS->AST->JS`

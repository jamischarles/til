# How to sandbox untrusted JavaScript code execution

This could be useful if you want to have a in-browser repl or interactive playground of some sort.

## Update with Solution:
The easiest/best approach I found was creating an `<iframe>` with the `srcDoc`
attribute set (which sets the src of the iframe to an inline string).

Then you `postMessage` code you want to `Function('return eval(code)')()` to that iframe. Works
very well! This creates a new function and then runs it. Downside is that you
have to explicitly return. Upside over eval is that it wipes the old state so
variables don't stick around between cycles.

We fix those issues by using eval and wrapping that in a `Function(eval)()`.
This allows state to be reset between cycles (due to new function being defined
and run) AND it also auto-returns the last expression (due to it being `eval`).
Very nice!

Only caveat: `window.varName` will persist between cycles. We should disallow
that somehow... We could periodically reset the srcDoc...? This could turn into
a mem leak... As long as we remove the `message` eventListener in the iframe first?

Another solution is to use proxy to disable any window modification... hm...
interesting...

Proxy doesn't work, but other similar solutions might...
https://stackoverflow.com/questions/38759116/how-can-i-detect-when-a-global-variable-is-set-in-javascript

This could work!
https://stackoverflow.com/questions/45437583/proxy-on-window#:~:text=4%20Answers&text=Short%20answer%20is%20no.,need%20to%20do%20such%20shenanigans.

Wrapping the code to execute in a proxy like ^ would definietly allow for some
interesting eval features... validation/ santizing etc... 

It currently works similarly to the console repl. Which is pretty acceptable.
Maybe future mitigation could be linting / checking for `window.*` setting and
we could warn / block against that (just don't run the eval). Or we could use
ast or regex to change / filter that out. 

We could also have a "reset" button that actually replaces the iframe and resets
state completely.


## Prior notes

Most promising approaching atm:
Q: how secure is secure enough?
1. iframe
2.5 SW
2. WASM
3. node websockets 
4. closure lib


Reading:
Eval vs new Function()
https://stackoverflow.com/questions/4599857/are-eval-and-new-function-the-same-thing

Notes:
klipse is great, but pollutes the global scope. So separate runs aren't
accurate.

Reading:
https://users.soe.ucsc.edu/~abadi/CS223_F12/taly.pdf research paper on the
security
https://gist.github.com/pfrazee/8949363 Web Workers to isolate execution...

WASM talk:
https://www.youtube.com/watch?v=DKSxcozc4w8


Options:
-1. Send to an iframe to eval there and return...
0. Try wrapping the code like node.js does... https://gist.github.com/aemkei/3847852 ?
1. Wasm
2. subset of JS / interpreter / runtime written in JS
3. ajax calls to node? Q: websockets? https://60devs.com/executing-js-code-with-nodes-vm-module.html

4. interesting JS features to isolate scope
 https://blog.risingstack.com/writing-a-javascript-framework-sandboxed-code-evaluation/



Q: Could this work?
https://github.com/JoshuaWise/expression-sandbox


https://github.com/google/closure-library

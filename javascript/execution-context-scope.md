# What is execution context and how can we pass it in?

## What is execution scope
It's the environment the code executes in, including local scope, local
variables, closures etc, global vars etc...

## Use case:
You have a JS sandbox where you want to run some code. I want to be able to
define what the execution context for the code i want to run is...

## Options && Approaches: 
1. I could use an iframe and inject the things I want defined into the global
   scope of the iframe

2. Use `with` keyword (exactly what it is for haha). It extends the scope chain,
   though usage is not recommended.
   `with (myobj) var res = eval(c);`
https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Statements/with

3. Inject eval into function top:
Pass in a `scope` key-val obj, and iterate over those...
`eval(`var ${k} = vegetableColors['${k}']`);`

4. Inject temp var assignments / destructuring into function top


Really interesting options here
https://stackoverflow.com/questions/31907970/how-do-i-destructure-all-properties-into-the-current-scope-closure-in-es2015


https://stackoverflow.com/questions/43754035/javascript-convert-object-properties-to-variables-inside-function-scope?noredirect=1&lq=1

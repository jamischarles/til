# How to type functions...

https://2ality.com/2020/04/typing-functions-typescript.html


## Constraining params (interesting)
https://www.typescriptlang.org/docs/handbook/2/functions.html

## Overload signatures (call same function 2+ different ways)
https://www.typescriptlang.org/docs/handbook/2/functions.html#function-overloads


## Using THIS in a function (signature)
https://www.typescriptlang.org/docs/handbook/2/functions.html#declaring-this-in-a-function

If you need to support different function signatures (by passing in an instance of something), don't use overloads, use `this` instead. TS has great support for that.

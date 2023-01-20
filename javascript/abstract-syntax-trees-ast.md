# Working with Abstract syntax Trees (AST)

## Tools to work with ASTs
https://jotadeveloper.medium.com/abstract-syntax-trees-on-javascript-534e33361fc7

### Code instrumentor
jscodeshift (fb codemods)
https://www.npmjs.com/package/astring (turn AST back to JS)
https://github.com/estools/escodegen `JS->AST->JS` (AST -> CODE)


## Best tools I've found
https://github.com/acornjs/acorn - Parse JS -> AST - By Codemirror author
Then use astring to convert it back...



### Interesting optinos for JSON-AST manipualtion
https://github.com/vtrushin/json-to-ast -> Is what astExplorer uses for JSON.
https://github.com/rse/json-asty

## Examples where I used them
https://replit.com/@jamischarles/clienside-repl-playground#script.js

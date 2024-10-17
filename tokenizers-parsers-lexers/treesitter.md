# Treesitter for syntax highlighting, tokenizing etc...

Lezer is the JS version of Treesitter (C-based).

Codemirror is an editor based on the grammars and tokenizing of Lezer.

Reading through all the tree-sitter docs really helps you understand Lezer better.


https://tree-sitter.github.io/tree-sitter/creating-parsers#command-highlight



## Generate a syntax tree from a file ( we don't need to provide a grammar file? Is it bundled?)
`$ tree-sitter parse somefile.js` <-- takes a long time... Why? With JS?

## Generate a tags file
`$ tree-sitter tags grammar.js`


You can use these language specific ones
https://github.com/tree-sitter/tree-sitter-json/tree/master

^ you can use the rust bindings from this to generate a Rust executable thta parses JSON files


Is only JS included as a grammar by default? Do the others need to be added manually?


## Installed grammars
Show which are installed
`$ tree-sitter dump-languages`


## How to generate a parser
1. find the grammar.js from the treesitter language repo 
2. download it to a folder
3. Run this command in that folder to generate a parser executable for that language/grammar
`$ tree-sitter generate`

## Then you run it
`$ tree-sitter parse example-file.json`  (from the same folder??) 
https://tree-sitter.github.io/tree-sitter/creating-parsers#dependencies


## Highlight code block based on this
`$ tree-sitter highlight json.grammar.json`



## tree-sitter config IMPORATN !!!!!!!!!
https://github.com/tree-sitter/tree-sitter/issues/732


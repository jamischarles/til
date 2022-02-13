# How to add a build step to html/css repl?


In action:
https://replit.com/@jamischarles/expcodemirrorexperiments#README.md


## Main requirements for that: 
1. output the built files into the root folder
2. Hook up the "Run" button to "npm run build"
^ doesn't work for HTML files?

Looks like Run button won't work for HTML replits...

https://docs.replit.com/programming-ide/configuring-repl

## Critical things I had to do
- Delete the assets file before build
- Delete build folder
- after generating, mv build folder into root


```json
{
"build": "rm -rf build && rm -rf assets && vite build && mv build/* ."
}
```
`npm run build` script ^

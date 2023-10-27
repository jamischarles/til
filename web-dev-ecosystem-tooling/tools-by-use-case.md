# What tools are good / best for common use cases?

Watch file folder 
- [Chokidar](https://github.com/paulmillr/chokidar) https://github.com/open-cli-tools/chokidar-cli CLI esp for build tooling

Simple static node server
https://github.com/http-party/http-server

Run multiple npm scripts in parallel
https://www.npmjs.com/package/concurrently
npm-run-all? look at this too

Start a server, then run task when ready
https://www.npmjs.com/package/start-server-and-test
https://www.npmjs.com/package/wait-on (with concurrently)

How to rewrite your JS (`var->const` etc)
Astring
https://twitter.com/_paulshen/status/1494401474612248576
https://comby.dev/


Image resizing on the CLI (and variants)
https://twitter.com/buildsghost/status/1494477760244244481

Format and stage files on pre-commit hook
https://prettier.io/docs/en/precommit.html
lint-staged



Find replace project wide with sad (better sed)
`rg CI.Event.CONTINGENCY -l | sad  '(CONTINGENCY.\w+)'` '${1}hi' 
^ will suffix every instance of CONTINGENCY with `hi`

# What tools are good / best for common use cases?

## Watch file folder 
- [Chokidar](https://github.com/paulmillr/chokidar) https://github.com/open-cli-tools/chokidar-cli CLI esp for build tooling

## Simple static node server
https://github.com/http-party/http-server

## Run multiple npm scripts in parallel
https://www.npmjs.com/package/concurrently
npm-run-all? look at this too

## Start a server, then run task when ready
https://www.npmjs.com/package/start-server-and-test
https://www.npmjs.com/package/wait-on (with concurrently)

## How to rewrite your JS (`var->const` etc)
Astring
https://twitter.com/_paulshen/status/1494401474612248576
https://comby.dev/


## Image resizing on the CLI (and variants)
https://twitter.com/buildsghost/status/1494477760244244481

## Format and stage files on pre-commit hook
https://prettier.io/docs/en/precommit.html
lint-staged - helpful for large projects and standards change. So you can easily lint/prettier only the new changes w/o having to apply the new standards to EVERYTHING. If you pull in lint-staged into an existing project may help to periodically run prettier/lint on ALL the code to see where the delta is and get a new baseline.



## Find replace project wide with sad (better sed)
`rg CI.Event.CONTINGENCY -l | sad  '(CONTINGENCY.\w+)'` '${1}hi' 
^ will suffix every instance of CONTINGENCY with `hi`


## Generators / scaffolding
https://github.com/Rich-Harris/degit - RICH HARRIS. Dying to try this one!!!


- Yeoman (old?)

Write zx scripts?

Python based :(
- scons?
https://github.com/copier-org/copier

Rust based?
https://github.com/Keats/kickstart


## Compile config files up the tree
https://www.npmjs.com/package/liftoff

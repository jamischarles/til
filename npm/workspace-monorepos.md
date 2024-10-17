# npm workspaces for monorepos 


* npm install at the root level

* all packages are installed at root level

* place packages in `/packages` folder


## install package in a specific workspace
`$ npm install lodash --workspace mySubThing`
`$ npm i lodash -w mySubThing`

## Run commands on all workspaces
`$ npm run test --workspaces`
`$ npm run test  -ws`

## further reading
https://ruanmartinelli.com/blog/npm-7-workspaces-1
https://docs.npmjs.com/cli/v10/using-npm/workspaces


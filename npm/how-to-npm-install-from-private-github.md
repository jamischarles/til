# How to npm install from private github (enterprise or private repo?)


`npm i git+ssh://git@REPO_URL.git#BRANCH_NAME --save` branch name is optional

`npm i git+ssh://git@github.paypal.com/jacharles/beaver-logger-paypal.git#signalFx.logger.metric.wip --save`
This ^ assumes you have ssh rights to access the repo on your machine.

Other options here.
https://stackoverflow.com/questions/22988876/install-npm-module-from-gitlab-private-repository

## Considerations
When you force push to the branch on github, the safest way to pull those new changes in:
`rm -rf node_modules/beaver-logger-paypal; npm i`

This will force-remove and force-reinstall it.

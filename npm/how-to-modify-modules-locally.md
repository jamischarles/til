# How to modify and test npm module changes locally

## Options
1. Just change the code locally in `node_modules`, then restart the app. This is the fastest way to quickly verify if a change would work as expected.
2. Then you want something more permanent. When you have made the change in a proper module folder (not under `node_modules`), you can run `npm pack` in that folder which will generate a tar file you should be able to npm install directly from local


## TODO:
- Try using `npm pack` locally when messing with an npm package so we can simulate installing it locally from local (creates a tarball we can install)

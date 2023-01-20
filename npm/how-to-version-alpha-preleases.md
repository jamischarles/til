# How to version alpha pre-releases with npm
`npm version prerelease --preid alpha``

Bump alpha to beta
`npm version prerelease --preid beta`


Bump prerelease version (very last digit)
`npm version prerelease`


`npm publish --tag beta` Publish the current commit to `beta` tag (can be installed with `npm install packageName@beta`)
If you didn't use `npm version prerelease` then it'll publish it both to `beta` and `latest`.

If you omit `--tag beta` (or alpha), it'll publish it, but you'll need to target the version directly instead of via the tag.

https://stackoverflow.com/questions/39206082/npm-version-to-add-alpha-postfix


## TODO:
- Try using `npm pack` locally when messing with an npm package so we can simulate installing it locally from local (creates a tarball we can install)

## Further reading:
https://gist.github.com/schmich/d04acc4b02b45e489f329cfdf3280a3f (how to release a prerelease version on npm)
https://medium.com/@vcarl/problems-with-npm-link-and-an-alternative-4dbdd3e66811#:~:text=use%20npm%20pack%20.-,npm%20pack,name%20and%20version%20from%20package. (npm pack and other magic)

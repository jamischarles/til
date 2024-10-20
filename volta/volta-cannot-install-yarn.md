# How to install yarn globally when volta won't let you

I frequently got this error, because npm is blocked on my work computer:

```
Error: Could not download Yarn version registry
from https://registry.npmjs.org/yarn

Please verify your internet connection.
```

This is strange becuase it only happens with yarn. So maybe the npm url is hardcoded for yarn?!?






## Newest, best solution
`~/.volta/hooks.json`
```json
{
    "yarn": {
        "distro": {
            "template": "https://artifactory.g.devqa.gcp.dev.paypalinc.com/artifactory/api/npm/npm-all/yarn/-/yarn-{{version}}.tgz"
        },
        "latest": {
            "prefix": "https://yarnpkg.com/"
        },
        "index": {
            "prefix": "https://npm.paypal.com/yarn/"
        }
    }
}
```

If you need npm too add that as well...
```json
{
    "npm": {
        "distro": {
            "template": "https://artifactory.g.devqa.gcp.dev.paypalinc.com/artifactory/api/npm/npm-all/npm/-/npm-{{version}}.tgz"
        },
        "latest": {
            "prefix": "https://www.npmjs.com/package/npm"
        },
        "index": {
            "prefix": "https://npm.paypal.com/npm/"
        }
    },
    "yarn": {
        "distro": {
            "template": "https://artifactory.g.devqa.gcp.dev.paypalinc.com/artifactory/api/npm/npm-all/yarn/-/yarn-{{version}}.tgz"
        },
        "latest": {
            "prefix": "https://yarnpkg.com/"
        },
        "index": {
            "prefix": "https://npm.paypal.com/yarn/"
        }
    }
}

```
Thanks Jon!

--------------------- OLDER ---------------------

## Older solution: Here's how I got around it:

Option 1)
- Install `yarn` via `homebrew` (easier)
- symlink volta yarn location to the brew location

`brew install yarn`
`brew info yarn`(gives local path of yarn)

`rm ~/.volta/bin/yarn*`
`ln -s/opt/homebrew/Cellar/yarn/1.22.19/bin/yarn ~/.volta/bin/yarn`

`yarn -v` now works!



------------------- OR -----------------------------------


Option 2)
1. Download the tar.gz file from npm (via curl). I used `npm info yarn --json` to get the tarball url
2. extract yarn to `~/.volta/tools/image/packages/yarn/lib/node_modules/yarn/*`
3. Symlink the binary to ~/.volta/bin

I had to symlink these 2:

```
ln -s  /Users/jacharles/.volta/tools/image/packages/yarn/lib/node_modules/yarn/bin/yarn ~/.volta/bin/yarn
ln -s  /Users/jacharles/.volta/tools/image/packages/yarn/lib/node_modules/yarn/bin/yarn.js ~/.volta/bin/yarn.js
```

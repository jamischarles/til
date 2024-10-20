# How to export sub paths from a library?

```json
  "exports": {
    ".": {
      "require": "./dist/index.js",
      "import": "./dist/index.mjs",
      "types": "./dist/index.d.ts"
    },
    "./dev-logger": {
      "require": "./dist/lib/dev-logger.js",
      "import": "./dist/lib/dev-logger.mjs.mjs",
      "types": "./dist/lib/dev-logger.d.ts"

    }
  }
```

^ This means we can now do the following:
`import {} from "@ppcorp/atomic-events`

`import {} from "@ppcorp/atomic-events/dev-logger` \<- subpath

https://blog.r0b.io/post/esm-nodejs-typescript-with-subpath-exports/
https://nodejs.org/api/packages.html#subpath-exports

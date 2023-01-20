# How to get es-modules (ESM) working with TS

* Use vitest (better support with both together than Jest)

I had to use this for some old school modules:
`import { default as prettyError } from 'pretty-error';`
 and had to enable
`"allowSyntheticDefaultImports": true, in tsconfig and use this`

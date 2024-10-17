# How do I solve these strange vitest  errors?



## Missing specifier
`Error: Missing "./" specifier in "X" package`???

In my case, it was a monorepo, and vitest didn't know how to resolve the local package import. Solution: Add an alias in the vitest config  

### Solution
```js
  //vitest.config.ts
  resolve: {
    alias: {
      // help vitest resolve corp/atomic-events-core (in monorepo locally) so we don't get this wacky error:
      // Missing "./" specifier in "@paypalcorp/atomic-events-core" package
      'corp/atomic-events-core': path.resolve(__dirname, '../atomic-events-core'),
    },
  },
```

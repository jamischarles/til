# How to supercharge union type hinting with pretty-union

```ts
type Prettify<T> = {
  [K in keyof T]: T[K];
} & {};
```

https://timdeschryver.dev/bits/pretty-typescript-types

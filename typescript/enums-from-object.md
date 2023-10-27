# How do I generate enums from an object? 


```typescript
type HealthCheckAssertionType = ValueOf<{test: 'hi', test2: 5}>;`
```
(`ValueOf` is NOT built in ^)
https://dev.to/smeijer/a-typescript-valueof-implementation-and-how-it-s-built-4gim

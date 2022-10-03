# Common TypeScript errors.

## Spread types may only be created from object types:

*Solution*:
Define it as a Record with a key of string type, and unknown values.
```
...someObj as Record<string, unknown>
```

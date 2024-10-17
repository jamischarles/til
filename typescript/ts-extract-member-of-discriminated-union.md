# How to extract a member of a discriminated union without importing it explicitly

```ts
type SqaureShape = Extract<Shape, {type: 'square'}> // { type: 'square' }
```
https://dev.to/arafat4693/best-ways-to-use-extract-in-typescript-jc2

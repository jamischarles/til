# Generics in TS

```ts

// https://www.typescriptlang.org/docs/handbook/2/generics.html#hello-world-of-generics
// <Type> denotes a "Type Variable" so we can pass it in as a type
function identity<Type>(arg: Type): Type {
  return arg;
}

// can call like this
let output = identity<string>("myString");
// or like this
let output = identity("myString"); // will infer the type  based on the param type passed in

```


```ts
Array<Type>
// same as
Type[]

```


## More reading
https://www.typescriptlang.org/docs/handbook/2/generics.html



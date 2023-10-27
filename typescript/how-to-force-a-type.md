# How to force type coersion in TypeScript

Sometimes (like for a unit test, or an error condition) you want to use an API incorrectly.

Here's how you force the type checking to ignore the mismatch


`as [Type]`
ie:
`{} as MySpecialType`
In ^ case `{}` was failing tsc because it didn't match the type.

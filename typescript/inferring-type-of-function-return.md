# How can I infer a type from a function return?

Use `ReturnType`. Amazing.

`type myType = ReturnType<typeof createCustomLogger>;`

So we have a function called createCustomLogger(), and we want to infer the typeof the returned value. 

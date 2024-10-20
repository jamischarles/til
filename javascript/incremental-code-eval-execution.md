# How can we incrementally execute code 1 line at a 1 time?

We have a code block. We'd like to have swift-playground like result where we
see the result of each expression in the right rail...

## Approaches I've tried

### Eval each line separately

Doesn't work because each line sets up a new in-browser VM with isolated
execution context (lose the scope from prior lines).

### Eval incrementally

Eval to line 1, eval to line 2, eval to line 3 etc...

Doesn't work because the last expression is what's returned...

ie:

This returns 5.
What I'm looking for is 3 returns: `undefined`, 5, `undefined`.
Instead the last line returns 5. :(

```js
eval(`
	let x;
	x=5;
	let y;
`')
```

This is because of statement vs expression.

SOLUTION!!!!:
Nested eval.

```js

eval(`	let x;
	x=5;
	eval('let y'); // expression that returns a value`')
```

### Eval and pass in execution context

TODO: Make a til on execution context...

Q: Could we pass in / provide the scope by doing module wrapping like node
does?

I believe this is how Webpack and node handle module isolation...

```js

// wrapper
function(){

	code we want to run


}(); // execute immediately
```

// we could just use the params and args to define the local scope right...?
interesting...

//and then if we replace window, or run web worker we could pass in the scope
and isolate it?

Q: Could we define the execution context that way? Interesting......

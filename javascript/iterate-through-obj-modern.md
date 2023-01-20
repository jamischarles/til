# Modern ways of iterating through objects

```js
	// decode any encoded values (usually from urls) 
	// turn obj into entries nested array, then restore it
	return Object.fromEntries(Object.entries(params).map((([key, val]) => {
		return [key, decodeURIComponent(val)]
	})))
```

Also, for..in, for..of

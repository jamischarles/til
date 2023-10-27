# How to  use dynamic import with default export?


```js
	import(`./sample-data/${calId}-summary.json`).then(({default: data})=>{
		console.log('data', data);
	});
```

or 
```js
    const { default: result } = await import(
      "./fixtures/EC-2NY486777J038674U.api-response.fixture.json"
    );

```



https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Operators/import#importing_defaults

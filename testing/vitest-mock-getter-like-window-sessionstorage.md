# How to mock get accessors for globals like window.sessionStorage


```js
/**
 * in playwright we can launch firefox in cookieless mode. Here we'll just mock it with similar behavior.
 * Accessing throws
 * Will ensure that session/local storage throws a Security error when accessed
 */
vi.spyOn(window, 'sessionStorage', 'get').mockImplementation(() => {
  const msg = 'SecurityError: The operation is insecure.';
  throw new Error(msg);
});
```

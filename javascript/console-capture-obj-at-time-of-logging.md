# How to freeze an object at time of logging instead of having it live?


```js
console.log(JSON.parse(JSON.stringify(obj)))
```

This will capture the obj shape at the time of the log (becuase of stringify)
instead of maintaining a live connection.

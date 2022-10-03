# How to detect an infinite loop in JavaScript and recover from it

Easiest way to is to give the loop a timeout period. After the elapsed time (25ms in the example below), you can `break;` if you want a clean exit, or `throw()` if you want to throw an error.

```js
const startTime = Date.now();\n" + editorContentStr;

for (let i=0; i<5; i++) {
	const now = Date.now(); if (now - startTime > 25) throw('ERROR: Infinite loop detected. Exiting loop...');
	i=0;
}
```

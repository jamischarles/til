# How do I detect a page refresh from the Chrome extension background (SW)

Add this listener in the content script and ensure it gets run before the page
unloads

```js
window.addEventListener('beforeunload', function(e) {
	// Q: Can we detect refresh vs nav away?
	console.log('###PAGE UNLOADING!!!!!!!' , e);
});
```



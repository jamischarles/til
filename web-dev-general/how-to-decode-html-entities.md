# How do I decode/unescape html entities in a string


```js
function htmlDecode(input) {
  var doc = new DOMParser().parseFromString(input, "text/html");
  return doc.documentElement.textContent;
}

console.log(  htmlDecode("&lt;img src='myimage.jpg'&gt;")  )    
// "<img src='myimage.jpg'>"

console.log(  htmlDecode("<img src='dummy' onerror='alert(/xss/)'>")  )  
// ""
```

https://stackoverflow.com/questions/1912501/unescape-html-entities-in-javascript

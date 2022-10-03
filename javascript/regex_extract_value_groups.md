# Regex: Extract a value using regex groups

// TODO: READ:
https://javascript.info/regexp-introduction
https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/String/replaceAll
https://developer.mozilla.org/en-US/docs/Web/JavaScript/Guide/Regular_Expressions/Groups_and_Ranges


`.match()` returns an array. `[1]` is the first match 
```js
"at fourStandAlone (script.js:43:5)'".match(/at (\w+)/)[1];
```


Easiest way for many result

```
var res = str.matchAll(/href="\/(lessons.+)">/g);

// matchAll is new and reutrns an iterable
var arr = Array.from(res)



	arr[0][1]; // [1] is the capture group result
```

## Further reading
https://developer.mozilla.org/en-US/docs/Web/JavaScript/Guide/Regular_Expressions/Groups_and_Ranges

https://twitter.com/addyosmani/status/1482256875051573251/photo/1


https://javascript.info/regexp-groups
https://developer.mozilla.org/en-US/docs/Web/JavaScript/Guide/Regular_Expressions/Groups_and_Ranges


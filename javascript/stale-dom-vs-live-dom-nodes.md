# Why does the dom appear to be stale sometimes?

## HTMLCollection vs NodeList


QuerySelector returns a NodeList which is a COPY of the dom element. It won't update things live (or will take some time?).
document.getElementById (and some others) return a LIVE htmlCollection. Changes on that will be updated immediately.


When using the former, and things aren't updating, consider using methods instead of props... ie: 
`input.value = "hi"` on NodeList won't update immediately.
`input.setAttribute('value', 'hi') will be reflected at once`


## More reading
https://developer.mozilla.org/en-US/docs/Web/API/NodeList
https://developer.mozilla.org/en-US/docs/Web/API/HTMLCollection

# How to define / override native element properties

Sometimes you have need to define element props like innerText (like in JSDom where innerText isn't defined).


```
// could also define on a specific element instead of all elements like this
// mock width and height, and innerText
Object.defineProperty(HTMLElement.prototype, 'offsetHeight', {
  configurable: true,
  value: 500,
});
Object.defineProperty(HTMLElement.prototype, 'offsetWidth', {
  configurable: true,
  value: 300,
});

Object.defineProperty(HTMLElement.prototype, 'innerText', {
  configurable: true,
  get: function () { // getter function that will get called when this property is accessed. 
    return this.textContent; // just for mocking return textContent (supported by JSDOM, whereas innerText isn't)
  },
});
```

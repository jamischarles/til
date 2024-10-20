# Motion canvas hard to find items

## How to spin an item infinitely

```js
  yield loop(
    () => spinnerIconRef().rotation(0).rotation(360, 2, linear),
  );
```

## How to count down a number

`<Txt>` \<- use a text ref

```js
countDownRef().text("2s", 1).to("1s", 1),
```

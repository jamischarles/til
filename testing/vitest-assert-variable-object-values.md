# How can I assert against an object where some values are dynamic?


THE BEST ONE. Love it. 
`metricValue: expect.any(Number),`

`metricValue: 23` <- will pass

BEST combo right here. Works well with floats too.
```js
matchObject({
  num: expect.any(Number)
})
```


Other options...

`expect({test: 1, test2: 2, test3: 3}).toMatchObject({test:1});` This will pass



More complex example...
```js
    const firstEmitCall = obs.emit.mock?.calls[0];

    // need to assemble assertions like this to avoid asserting on the dynamic timing values (will be different on CI)
    // assert on each of the 3 args passed to obs.emit()

    expect(firstEmitCall[0]).toEqual('cpl_timer_testing-timer-end');
    expect(firstEmitCall[1]).toEqual('info');
    expect(firstEmitCall[2]).toMatchObject(expectedEmitPayload);
```

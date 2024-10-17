# Using performance.measure() and timeOrigin

`performance.timeOrigin` is a timestamp of when navigationStarted.

`performance.now()` is ms since `timeOrigin`

`performance.measure()` expects units of `performance.now()` ie: relative to timeOrigin.

So if you want to measure from timeOrigin use `0`.

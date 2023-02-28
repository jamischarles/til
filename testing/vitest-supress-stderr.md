# How to suppress stderr for errs during tests we'd expect


```js

const oldConsoleErr = console.error;
const newConsoleError = function (log: string) {
  if (/connect ECONNREFUSED/.test(log)) {
    // swallow the xhr error caused by logger trying to flush logs to /null endpoint (so we don't send test logs to stage cal)
  } else {
    oldConsoleErr.apply(console, [...arguments]);
  }
};

async function flushBeaverBufferAndSuppressStdErr() {
  console.error = newConsoleError;
  try {
    await beaver.flush(); // console.err()
  } catch (e) {}
  console.error = oldConsoleErr;
}


describe('test', () => {
  beforeEach(flushBeaverBufferAndSuppressStdErr);

```

# How to use done() (async) tests for callbacks in vitest?

First try to use async await. 

If that's not possible use a promise:

(see 'done' section)
https://vitest.dev/guide/migration.html#migrating-from-jest

```js

  test('test callback', async () =>
    new Promise(done => {
      cb(()=>{
          done(''); // verifies callback was executed
        })
      });
    }));
```

# Jest errors on require() statements that are auto-converted to import esm

```
TypeError: Cannot convert undefined or null to object
        at Function.getPrototypeOf (<anonymous>)

```

https://jestjs.io/blog/2022/04/25/jest-28#packagejson-exports


This likely means that you are requiring a node module in a JSDOM env and expecting it to behave like a node module, but it's pulling it in as an ESM. 

You can try to set it as a node env instead for that file

This in the header
```js
/**
 * @jest-environment jsdom
 * @jest-environment-options {"url": "https://jestjs.io/"}
 */
```
https://jestjs.io/blog/2022/04/25/jest-28#inline-testenvironmentoptions

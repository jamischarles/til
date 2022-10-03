
Turns out in esm node modules, you don't have access to `__dirname` anymore.

Here's how you can do similar things.

`import.meta.url; // abs ref to current file`;

We can combine that with a relative path to get an abs path reference:
`new URL(filePath, import.meta.url);`

## Further reading:
https://nodejs.org/api/esm.html#importmetaurl
https://blog.logrocket.com/alternatives-dirname-node-js-es-modules/

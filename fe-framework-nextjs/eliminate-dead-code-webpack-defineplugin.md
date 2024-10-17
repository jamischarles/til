# How to eliminate dead code with next.js app router (14+)

Apparently you just use stanard node_env check and it'll work in the browser for next.js!

```js
const env = process.env.NODE_ENV
if(env == "development"){
  // do something
}
else if (env == "production"){
 // do something
}
```

https://stackoverflow.com/questions/64792787/easiest-way-to-detect-production-or-dev-environment-in-nextjs



## Other ways?
Webpack DefinePlugin seems to be the way... Which next.js uses under the hood?

## More reading:
https://nextjs.org/docs/app/api-reference/next-config-js/env
https://nextjs.org/docs/app/building-your-application/configuring/environment-variables

https://nextjs.org/docs/app/building-your-application/upgrading/from-vite#step-7-migrate-the-environment-variables

# How to get vite hmr working on replit in a node container

 
```js
// in vite.config.js
server: {
    // necessary configs to have hmr working on replit...
    hmr :{
      host: 'codemirrorexperiments.jamischarles.repl.co', // url where public
	  site/assets are served up
      port: 443,
      https: true,
     }
  }
```

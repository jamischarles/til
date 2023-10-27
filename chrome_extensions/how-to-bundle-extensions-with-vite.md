# What output format should you use for chrome extensions if you bundle and use esm?
A: Target `umd`. That's the safest and easiest for how chrome injects content scripts into the host page. 

## Errors
Helps avoid the `unexpected token 'export'` error

This vite config worked really well for me.

```js
export default defineConfig({
  plugins: [svelte()],
  base: "", // relative assets path if we leave this blank. https://stackoverflow.com/questions/69744253/vite-build-always-using-static-paths
  build: {

    // we need this to not use an index.html file
    //https://vitejs.dev/guide/build.html#library-mode
    lib: {
      // Could also be a dictionary or array of multiple entry points
      entry: "src/main.ts",
      name: "MyLib",
      // the proper extensions will be added
      fileName: "my-lib",
      formats: ["umd"] // FINALLY helped resolve the 'unexpected token 'export' import error on host page
    },
    assetsDir: "./assets",
    rollupOptions: {
      external: [],
      output: {
        esModule: false,
        entryFileNames: `assets/[name].js`,
        chunkFileNames: `assets/[name].js`,
        assetFileNames: `assets/[name].[ext]`,
      },
    },
  },
});
```

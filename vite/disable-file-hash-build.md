# How do I disable the file hash suffix for generated files in Svelte and Vite?

```
build: {
  rollupOptions: {
      output: {
        entryFileNames: `assets/[name].js`,
        chunkFileNames: `assets/[name].js`,
        assetFileNames: `assets/[name].[ext]`
      }
   }
}
```

https://github.com/vitejs/vite/issues/378#issuecomment-768816653

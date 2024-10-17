# esbuild




## Removing external packages from the lib like `react`
```js

// from https://eisenbergeffect.medium.com/an-esbuild-setup-for-typescript-3b24852479fe
export function createBuildSettings(options) {
  return {
    entryPoints: ['src/index.ts'],
    outfile: 'www/bundle.js',
    bundle: true,
    plugins: [],
    // for now exclude ALL deps from the bundle
    packages: 'external', // https://esbuild.github.io/api/#packages

    // if we include deps later in bundle, this allows us to exclude specific ones, or all the peerdeps
    // external: ['react'],
    // https://esbuild.github.io/api/#external
    // const external = Object.keys(pkgJson.dependencies ?? {}).concat(
    //   Object.keys(pkgJson.peerDependencies),
    // );
    ...options,
  };
}
```

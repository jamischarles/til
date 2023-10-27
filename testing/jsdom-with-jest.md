# Want to use JSDOM  with Jest 

https://jestjs.io/docs/tutorial-jquery


## There's some weird things
1. JSDom is not exposed.
https://github.com/jestjs/jest/issues/2460

## Jest explodes if I try to import jsdom directly
https://github.com/DefinitelyTyped/DefinitelyTyped/issues/45173


## Things aren't imported properly?
https://github.com/jestjs/jest/pull/12771/files#diff-32dcffcdbe0800315a6f8b3f3b3d735115e75404e9b22a17720905b8a51c47f2

This is related to package exports field that jest now uses

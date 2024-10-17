# Bundling best practices... 

https://www.misha.wtf/blog/rollup-library-starter
https://nodejs.org/api/packages.html#dual-package-hazard


History reading:
https://www.simplethread.com/javascript-modules-and-code-bundling-explained/


## Typescript lib 
Winner: esbuild


Reading:
https://eisenbergeffect.medium.com/an-esbuild-setup-for-typescript-3b24852479fe <-- WONDERFUL
https://janessagarrow.com/blog/typescript-and-esbuild/



https://tsdx.io/ -2


Rollup is great but pretty low level.

For a higher abstraction, try esbuild, vite, or tsdx. 


## TS Bundling options for a package
tsdx -1 (seems abandoned. Some things not working anymore w)
tsup -1 but maybe tsup + tsc (will help fix the output extension issue I ran into...) 
vite
custom rollup
esbuild or esbuild + tsc
https://jakeginnivan.medium.com/options-for-publishing-typescript-libraries-9c37bec28fe



https://www.reddit.com/r/typescript/comments/pss7kx/compiling_ts_libraries_which_bundler_compiler/

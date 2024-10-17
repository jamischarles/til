# How to handle TS in a monorepo well 


## Project refs
https://moonrepo.dev/docs/guides/javascript/typescript-project-refs
https://www.typescriptlang.org/docs/handbook/project-references.html


> The official TypeScript documentation on project references answers many of these questions, but it basically boils down to the following:


> Project references enforce project boundaries, disallowing imports to arbitrary projects unless they have been referenced explicitly in configuration. This avoids circular references / cycles.
It enables TypeScript to process individual units, instead of the entire repository as a whole. Perfect for reducing CI and local development times.
It supports incremental compilation, so only out-of-date or affected projects are processed. The more TypeScript's cache is warmed, the faster it will be.
It simulates how types work in the Node.js package ecosystem.

https://moonrepo.dev/docs/guides/javascript/typescript-project-refs

# What is strict mode in JavaScript?

Triggered via `use strict` at the top of a file / script...

Eval behaves differently

- isolates the eval scope from the surrounding scope (makes it more of a sandbox)
- allows eval to use surrounding scope, but won't allow eval to modify the
  surrounding scope.

More reading:
https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Strict_mode
https://whereswalden.com/2011/01/10/new-es5-strict-mode-support-new-vars-created-by-strict-mode-eval-code-are-local-to-that-code-only/

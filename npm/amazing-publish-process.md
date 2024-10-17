# Best npm publish setup

## Tools:
* np from sindre for NIIIICE publish CLI
* auto-log for generating changelog during publish

Setup
```json
  "scripts": {
    "pub": "npm run pull && npm run build && np",
    "pull": "git pull --rebase upstream main",
    "test": "vitest --reporter verbose",
    "build": "[insert yours here]",
    "version": "auto-changelog -p && git add CHANGELOG.md",
  },
```


Then precommit hooks for prettier etc via husky.

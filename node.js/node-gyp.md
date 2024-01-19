

## Node-gyp issues
Ensure you are the running a current version of `node-gyp` (comes bundled with
node)
https://github.com/nodejs/node-gyp/blob/main/docs/Force-npm-to-use-global-node-gyp.md#force-npm-to-use-global-installed-node-gyp

## Sometimes you get `python not found issues` while running node-gyp during npm install (esp node@16+)
Solution:
- Manage python versions with pyenv
- `pyenv global python 3.9` sets high enough version

then add this to rc file (fish for me):
```fish
pyenv init - | source
alias python="$(pyenv which python)"
```


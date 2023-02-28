# How to preserve git history when renaming/moving a file with git


## Use Git move
https://git-scm.com/docs/git-mv

```
ls ./src/**/*.js | while read line; do git mv -- $line ${line%.js}.ts; done;
```
I had to modify the `src/**/*.js` to `src/*.js` for my use case but this is great.

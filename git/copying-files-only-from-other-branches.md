# How do you copy file content only and not the git history from other branches


`git ls-tree -r --name-only BRANCH_NAME_OR_COMMIT_HASH` - Show file tree on other git branches


`git checkout flow-to-typescript -- tsconfig.json` - bring over the file content from that file and `flow-to-typescript` branch to the current branch.

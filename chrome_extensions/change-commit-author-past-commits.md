# How to change the commit author for past commits

1. Interactive rebase
`git rebase -ip [commit hash]`

2. In the rebase view, change `pick` to `edit` (or `e`) for the commits you want
   to change.

3. Back on the command line when each commit is loaded during the rebase, amend
   the commit with:
`git commit -v --amend --author="Jamis Charles <myemail@example.com>" --no-edit`

4. Move to the next commit (until complete)
`git rebase --continue`

5. Done! If your remote branch has the wrong commit author you'll need to force
   push your changes (careful with that).


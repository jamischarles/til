# Using git worktree to work with several git branches at the same time

Sometimes you want to work with 2 branches at the same time. git worktree is how you do that!


`$ git worktree add [where_to_save_branch_to] [branch_to_save]`
`$ git worktree add ../atomic-events-refs chore/type-references`

^ creates folder and checks out the branch there.

# How to run a shell command in Lua/nvim and save the output to a variable

`:!git status`
`:silent !git status` (no output)

`vim.fn.system('ls')`
`vim.fn.systemlist('ls')` -- command and return result as list

`lua vim.fn.system('ls')`

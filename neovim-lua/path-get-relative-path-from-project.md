# How to get bufferPath relative to project root in Lua/Nvim?

In Lua:
`vim.fn.expand('%:h')`
If you are in `./config` (relative to project root) (or where you opened nvim?)
then it'll show `config` YAS

Similar: in git project this will give you the project root:
`$ git rev-parse --show-toplevel` -- SHOW root folder of project (VERY VERY VERY USEFUL)

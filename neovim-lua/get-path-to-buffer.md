# How to get filname(path) of the current buffer?

```lua
vim.api.nvim_buf_get_name(0) -- absolute path name
vim.fn.expand('%') -- relative to where nvim was opened
```

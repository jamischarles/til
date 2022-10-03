# How to map keys in neovim using lua

mode, key, mapTo
(in insert mode keep backspace the same)
`vim.api.nvim_set_keymap("i", "<BS>", "<BS>")`

For running commands from insert mode, use `<cmd>`
`vim.api.nvim_set_keymap("i", "<BS>", "<cmd>:stopinsert<CR>")`

With my mapping sugar function
`map("i", "<BS>", "<cmd>:stopinsert<CR>", {noremap = false})`

## Addtiional commands & info

`:startinsert/:stopinsert/vim.cmd('startinsert')`

## Difficult mapping (unintuitive)

See `:help key-notation` and `:help mapping`

This magic helps do some stuff...

```
  local feedkeys = function(keys)
    vim.api.nvim_feedkeys(
      vim.api.nvim_replace_termcodes(keys, true, true, true),
      'i',
      true
    )
  end

  if col == prompt + 1 then return end

  if col == prompt + 2 then
    vim.cmd([[normal ch]])
    vim.cmd([[startinsert]])
    return
  end

  if col == line + 1 then
    vim.cmd([[normal cl]])
    vim.cmd([[startinsert]])
    feedkeys('<Right>')
    return
  end

  vim.cmd([[normal ch]])
  vim.cmd([[startinsert]])
  feedkeys('<Right>')
```

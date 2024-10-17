# How to create a floating (or full size) window in neovim like fzf does

You can use this to process the result of any terminal command (AWESOME)


```lua

-- https://www.chrisdeluca.me/2022/01/12/diy-neovim-fzy.html
-- Pop open broot as our filefinder / nerdtree replacement
local brootExplorer = function()
    local width = vim.o.columns * 2
    local height = 41
    if (vim.o.columns >= 85) then
        width = 80 * 1.5 
    end

    -- creating a new window is this easy?!?!?!  
    vim.api.nvim_open_win(
        vim.api.nvim_create_buf(false, true),
        true,
        {
            relative = 'editor',
            style = 'minimal',
            border = 'shadow',
            noautocmd = true,
            width = width,
            height = height,
            col = math.min((vim.o.columns - width) / 2),
            row = math.min((vim.o.lines - height) / 2 - 1),
        }
    )

    -- temp file we have to create (that's how broot does it too)
    local file = vim.fn.tempname()

    vim.api.nvim_command('startinsert') -- avoids having to switch to insert mode in popup
    vim.fn.termopen('/opt/homebrew/bin/broot --conf ~/.dotfiles/broot-shell.conf.toml > ' .. file, {on_exit = function()
        vim.api.nvim_command('bdelete!') -- automatically delete the terminal buffer
        --
        -- read the value from the temp file, then delete it
        local f = io.open(file, 'r')
        local stdout = f:read('*all')
        f:close()
        os.remove(file)
        -- if we leave this as is, it opens the file in the popup window... Could be cool for manual preview... 
        vim.api.nvim_command('edit ' .. stdout)
    end})
end
```

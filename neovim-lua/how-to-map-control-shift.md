# How to map control shift to neovim since most terminals ignore ctrl+shift


## tricky problem
https://stackoverflow.com/questions/1506764/how-to-map-ctrla-and-ctrlshifta-differently


https://www.reddit.com/r/neovim/comments/mbj8m5/how_to_setup_ctrlshiftkey_mappings_in_neovim_and/



## SOLUTION
1. Map it from neovim (supports it)
`<C-S-N>` Control shift n (case doesn't seem to matter)

2. 
Read this

You send the proper escape key via itemr2 mappings or via karabiner or some other similar tool

For N the char is 78.
So I send
`\x1b[78;5u`

Which sends Control + N

VICTORY

# Using broot to fuzzy search file trees 

## show git changed files
`br -gc :gs`
https://dystroy.org/broot/documentation/tricks/#open-files-without-a-windowing-system

## run command against selection
`br --conf ~/.dotfiles/broot-shell.conf.toml`

Contains this verb in the config:
```toml
[[verbs]]
invocation = "open"
key = "enter"
execution = "bat {file}"
apply_to = "text_file"
working_dir = "{root}"
leave_broot = true 
from_shell = true
```

https://github.com/Canop/broot/issues/293


## piping broot
```toml
[[verbs]]
invocation = "ok"
key = "enter"
leave_broot = true
execution = ":print_path"
apply_to = "file"
```
^ conf file
`br --conf ~/.dotfiles/broot-shell.conf.toml | xargs cat`

https://github.com/Canop/broot/issues/25#issuecomment-751459608


## More reading
https://dystroy.org/broot/conf_verbs/

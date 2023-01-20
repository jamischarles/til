# How to substitute commands in Fish

`diff (sort a.txt | psub) (sort b.txt | psub)`
`diff (jq a.json | psub) (jq b.txt | psub)`
`delta --diff-so-fancy (jq --sort-keys . 0-loggernodeweb-ui_init-summary.0.json | psub ) (jq --sort-keys . 0-loggernodeweb-ui_init-summary.1.json | psub )`
WOW ^^^

https://fishshell.com/docs/current/cmds/psub.html


Bash eq:
https://www.gnu.org/software/bash/manual/bash.html#Process-Substitution

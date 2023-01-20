# Homebrew


## Managing brew best practices
A key practice is to install EVERYTHING possible using brew, brew cask, or mas. Even things like fonts!

https://gist.github.com/ChristopherA/a579274536aab36ea9966f301ff14f3f


## Brew Bundle
There are 2 places/ways you can use brewfiles:
1) In a project folder to manage project deps
2) In a global folder. Need to export `$HOMEBREW_BUNDLE_FILE` env var from your shell rc to do that
ie: `export HOMEBREW_BUNDLE_FILE=~/.config/brewfile`  -- if if that's where you keep your brewfile



First time you run `brew bundle` it automagically installs it

Writing to bundle file first time (or updating if out of sync)
`brew bundle dump --file ~/.config/brewfile/Brewfile --describe` 

`brew bundle dump --file ~/.dotfiles/Brewfile --describe` -- I symlink mine to this location, so I want to install mine here


`brew bundle install` - install all the items from brew-bundle

`brew install [package]` (won't update brewfile)

`brew add [package]` (will update brewfile)


## Plussing:
- consider using brew aliases if I use the wrong command that doesn't update the brewfile 

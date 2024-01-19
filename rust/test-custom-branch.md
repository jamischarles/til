# How do you test custom branches of packages... in rust?

## how you test a branch. NIIICE

Put this in cargo.toml
```toml
[patch.crates-io]
tauri = { git = "https://github.com/tauri-apps/tauri", branch = "fix/menu-init-drop-main-thread" }
```

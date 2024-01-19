# Debugging Rust with GDB / LLDB


## Rustrover ide by jetbrains?
https://www.jetbrains.com/rust/


## LLDB with vscode - WOW. So good!!!!
https://tauri.app/v1/guides/debugging/vs-code/


## LLDB with neovim
https://romangeber.com/blog/tech/nvim_rust_debugger
https://www.reddit.com/r/neovim/comments/w2bf6z/debugging_in_neovim/

### launch.json for debugging tauri with vscode
```json
 "configurations": [
    {
      "type": "lldb",
      "request": "launch",
      "name": "Tauri Development Debug",
      // where the binary gets put after npm run tauri dev
      "program": "${workspaceFolder}/src-tauri/target/debug/tauri-notes-app",
      "args": [],

      // task for the `beforeDevCommand` if used, must be configured in `.vscode/tasks.json`
      "preLaunchTask": "ui:dev"
    }
  ]
}
```

## GDB 
### Installation on macos - did NOT work :(
`brew install --force --build-from-source domq/gdb/gdb`
https://gist.github.com/mike-myers-tob/9a6013124bad7ff074d3297db2c98247

https://dev.to/jasonelwood/setup-gdb-on-macos-in-2020-489k (for cert signing)


## GDBUI (frontend UI for gdb) Q: Do you need gdb running for this?
https://www.gdbgui.com/

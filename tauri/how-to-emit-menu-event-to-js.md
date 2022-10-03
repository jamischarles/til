# How to handle a menu event in JS

Copied from the post:
https://bytemeta.vip/repo/tauri-apps/tao/issues/149

```rust
.on_menu_event(|event| {
      let window = event.window();
      match window.set_focus() {
        Ok(_) => {
          println!("focus set successfully");
        }
        Err(err) => {
          println!("failed to set focus: {:?}", err);
        }
      }
    })
```

`The menu_event is bonded to a Window, where the System tray menu isn't. That's the main reason the signature is different.`

`Also, with window you can by example, window.emit(event, payload) to communicate with webview`

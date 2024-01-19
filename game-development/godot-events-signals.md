# Using signals and events in Godot



`event.as_text()` - human readable

## How to handle propogation and things like passing on to scroll handlers that are native?

> It is only called if unhandled input processing is enabled, which is done automatically if this method is overridden, and can be toggled with set_process_unhandled_input().

> To consume the input event and stop it propagating further to other nodes, `Viewport.set_input_as_handled()` can be called.

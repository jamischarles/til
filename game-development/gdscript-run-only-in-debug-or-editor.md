# How do I run code only in the editor or only in dev mode (spawned from editor)?


## BEST WAY
`OS.has_feature("standalone"):`
^ means it's been exported (standalone binary)
https://ask.godotengine.org/58519/check-if-game-is-exported


## More ways to check:
https://docs.godotengine.org/en/stable/tutorials/export/feature_tags.html

## Other ways
`Engine.is_editor_hint():`
^ checks if the actual code is running in the editor (like with a @tool script)



`if OS.is_debug_build() and OS.get_name == "Android":`
^ verifies that it's a debug build and running on Android

DEBUG build will run on ios as well. So we need to check for mac in my case...

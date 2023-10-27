# How to I fix the "unable to verify binary as safe error in a sidecar in macOS after downloading a binary."


You have to remove the quarantine flag that macOS added

`xattr -d com.apple.quarantine /path/to/file`
https://apple.stackexchange.com/questions/367364/cant-execute-binary-on-macos-catalina

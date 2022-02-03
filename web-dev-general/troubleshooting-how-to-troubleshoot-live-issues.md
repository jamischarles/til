# How to troubleshoot live issues

## Clientside issues
* Try to run manual breakpoints / debugger statements
* if ^ doesn't work use proxyman to inspect the requests
* if it isn't a payload/request issue, then use proxyman to map a local copy and
add debugger & console logs

## With Proxyman & devtools
* Figure out where the important paths are and turn off the debuggers during
those or you'll be too slow to get to the important parts.
* in proxyman you can easily enable/disable the proxy (proxy can make lots of
other requests really slow) with `cmd+option+o`

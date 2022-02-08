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

## Proxyman gotchas
- proxyman will change the system proxies from `automatic` (set by PP?) to `web
proxy` and `secure web proxy`. I'm fairly certain that zscaler freaks out
because it's proxy is turned off. So adding `https://www.paypal.com` under the
`bypass` list in system->prefs->advanced->proxies fixes ALL the timing out
issues for pp.com... YES  

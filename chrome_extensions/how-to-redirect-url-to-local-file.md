# How to redirect a url to a local file with extension
Use `declarativeNetRequest`.

Debugging:
https://stackoverflow.com/a/71277803

In `manifest.json`:
```json
  "declarative_net_request": {
    "rule_resources": [{
      "id": "ruleset_1",
      "enabled": true,
      "path": "rules_1.json"
    }]
  },
```
In `rules_1.json`. The file must be within the extension, or served by local
server...

Use this to get the url of the file:
`chrome.runtime.getURL("popup.html")`

If it can't find the destination resource, or doesn't have permissions the status will show as "(blocked:other)" in
devtools. 

Success means original resource will show a 307 status code.

```json
[
  {
    "id": 2,
    "priority": 2,
    "action": {
      "type": "redirect",
      "redirect": {
        "url": "chrome-extension://abckgldpfpiolkcgnkjjapplhgnjimmc/popup.html"
      }
    },
    "condition": {
      "urlFilter": "https://www.paypal.com/smart/buttons",
      "resourceTypes": ["sub_frame"]
    }
  }
]
```

In `manifest.json` provide permission to access local file in extension folder.
Or you can just host it locally with localhost.
```json

  "web_accessible_resources": [
    {
      "resources": ["popup.html"],
      "matches": ["*://*.jaanuu.com/*"]
    }
  ],
```

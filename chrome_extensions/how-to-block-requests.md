# How to block requests


Use `declarativeNetRequest`.

## Modify query param
```json
[
  {
    "id": 1,
    "priority": 1,
    "action": {
      "type": "redirect",
      "redirect":{
        "transform": {
          "queryTransform": {
            "addOrReplaceParams": [{ "key": "debug", "value": "true" }]
          }
        }
      }
    },
    "condition": {"urlFilter": "paypal.com", "resourceTypes": ["script"] }
  }
]
```

## Block script from PP.com



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
In `rules_1.json`
```json
[
  {
    "id": 1,
    "priority": 1,
    "action": { "type": "block" },
    "condition": {"urlFilter": "paypal.com", "resourceTypes": ["script"] }
  }
]
```

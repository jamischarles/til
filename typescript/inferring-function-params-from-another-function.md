# How can I infert the param types from another function so I can just pass through?


## Option 1
```ts

export function markUIWaiting(...args: Parameters<typeof buttonWaitClicked>) {
    buttonWaitClicked(...args);
}
```



## Option 2
```ts
type MarkUIWaitingParams = Parameters<typeof buttonWaitClicked>;

function markUIWaiting(
  intent: MarkUIWaitingParams[0],
  viewName: MarkUIWaitingParams[1],
  context: MarkUIWaitingParams[2],
) {
  buttonWaitClicked(intent, viewName, context);
}
```


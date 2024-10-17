# How to runtime assert to verify type and use that to narrow down the TS type

Similar to what Zod does.

You return a boolean and the value is then narrowed down to UIWaitingState type (in this case) 

```ts
/** Allows us to narrow the type at runtime */
function isValidWaitingState(state: unknown): state is UIWaitingState {
  if (typeof state !== "object") return false;
  if (typeof state.path !== "string") return false;
  if (typeof state.domain !== "string") return false;
  if (typeof state.domain !== "string") return false;
  return state.uiState === 'waiting';
}
```

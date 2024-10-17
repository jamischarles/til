# How to type narrow with TS and vitest in TS tests



```ts
import { assert } from 'vitest';

// this allows the type narrowing to work properly because it'll throw if it's not matching
assert(initialState?.uiState === 'waiting');
```

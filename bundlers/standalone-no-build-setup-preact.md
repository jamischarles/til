# How to create a standlone powerful build-free setup with preact

(some pain required)

Nice features
- signals
- no build step

## Steps
use esm CDN to get the proper bundles (some trial & error was included here...)
```js
import { html, render, hooks } from 'https://esm.sh/htm/preact/standalone';
import { signal, computed, effect } from 'https://esm.sh/@preact/signals@1.2.3';
import {useEffect } from 'https://esm.sh/stable/preact@10.20.2/es2022/hooks.js';
```

include ^ inside `<script type="module" />` or bundle it with esbuild.


Or just cave and use vite




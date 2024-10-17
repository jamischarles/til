
## Re-Importing modules to avoid init pollution between test runs
```ts
import type { BotDetectionResult } from '@fingerprintjs/botd';
// import type { RumGlobal } from '@datadog/browser-rum';

import { datadogRum } from '@datadog/browser-rum';

const datadogRumMock = {
  setGlobalContextProperty: vi.spyOn(datadogRum, 'setGlobalContextProperty'),
  addError: vi.spyOn(datadogRum, 'addError'),
};

describe('_checkForBotsAndReportMetrics...', () => {
  let _checkForBotsAndReportMetrics: typeof import('./index')._checkForBotsAndReportMetrics;
  let obs: typeof import('@/observability/client/obs').obs;
  let emitSpy: MockInstance<typeof obs.emit>;

  beforeEach(async () => {
    vi.resetModules(); // reset all the imports
    vi.clearAllMocks(); // reset the mock counters

    // unsure why but we seem to have to manually unmock this one...
    vi.doUnmock('@fingerprintjs/botd');

    ({ _checkForBotsAndReportMetrics } = await import('./index'));
    ({ obs } = await import('@/observability/client/obs'));

    emitSpy = vi.spyOn(obs, 'emit');
  });
```


```ts
// mock fingerprint lib to return false, since this unit test will always detect headless_chrome
vi.doMock('@fingerprintjs/botd', () => ({
  load: async () => ({
    detect: (): BotDetectionResult => ({
      bot: false,
    }),
  }),
}));
```

# How to delete import/require cache and re-import module for each test with Vitest

This is needed when there's init stuff that happens in the file etc. That you want to reset for each test.

```ts
describe('create-atomics', () => {
  let createAtomics: typeof import('../index').createAtomics;
  let __getState: typeof import('../lib/state').__getState;
  beforeEach(async () => {
    vi.resetModules(); // clear the require cache, so below will be a FRESH import
    window = new Window({
      url: 'https://localhost:8080',
    }) as unknown as globalThis.Window & typeof globalThis;
    document = window.document;
    ({ createAtomics } = await import('../index'));
    ({ __getState } = await import('../lib/state'));
    mockEmitCb.mockClear();
  });

  describe('when you call createAtomics(policy)... the atomic-events library is initialized and...', () => {
    it('should validate parameters: flow', () => {
      expect(() => {
        createAtomics({
          interactions: ['testCIName'],
          tasks: ['none', 'None', 'testTask'],
          viewNames: ['viewName', 'fakeView', 'myView', 'firstView'],
          domain: 'xo',
          flow: 'testFlow' as any,
        });
      }).toThrowError(`Both 'flow' and 'flows' must be either defined or undefined.`);
    });

```

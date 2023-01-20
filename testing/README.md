

LOVE this way to set up tests (Daniel Brain):

Focus is on `integration` style. And on USE CASES. Much less on "which file" or "which module". Those are implementation details anyway.
```js

describe('happy cases', () => {

    it('should set up locale correctly', async () => {
	it('should call funding.remember for remembered funding sources', async () => {
	it('should render a button, click the button, and render checkout', async () => {

```

> "Hah thanks Jamis! Yeah I always like to write tests in like an "integration test" style, more focused on use cases than implementation details when possible"
> "Coverage of use-cases > coverage of lines of code"
- Daniel Brain




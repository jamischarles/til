# Best practices and (soft) rules I like for writing tests

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



## The test report should read like a requirements list. 
If you lost the code, and you only had that spec, you should be able to recreate the feature set from what is listed in the test cases.

It should read like a sentence.

## Style guidelines I've learned and like
* define the expected criteria early in the test so it's clear at a glance.
* avoid a lot of abstractions. Whereever possible just define the data locally in the test
* where possible avoid nested before/after functions. Minimize how many you have 
* prefer fewer tests with longer bodies (within reason). If you have a bunch of 1 liner tests, combine them
* use vitest's verbose reporter to show all the tests (even when they pass) (nice feature list)
* avoid nesting describe statements more than 2 levels
* lead with consequence/result, THEN with conditions
ie: shall DO a WHEN x,y,z
If you do the opposite it's burying the lede which makes them much harder to read and to reason about...


## HOw to read a vitest test failure
* start with the first line, the assertionError
AssertionError: expected [] to deeply equal [ { payload: { …(2) }, …(2) } ]
Input is [] and it should be the latter instead
(todo: diagram this)

The bottom report is relation to THOSE. not each other...!!!

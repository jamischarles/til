# Pain points when migrating a test (suite) from jest to vitest 

* Mocks are slightly different.
* everything is (usually) global in jest. Make them explicit in vitest tests instead. Less magic.


* `beforeEach` doesn't run before describe blocks (unsure if jest handles this differently)

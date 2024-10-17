# Invalid TS errors on array index lookup

`const { metricId, ...dimensions } = payload[0];`
Error: property `metricId` does not exist on type `y`. Even though it's clearly there.

THis is happening because it's possible for `payload[0]` to return undefined. So you have to guard against it somehow.

## Solution 1:
If you know how many items will be in your array (like in a test), do this:
This defines exactly how many children are expected and what their type is.

`const payload: [CIMetricPayload, CIMetricPayload]`

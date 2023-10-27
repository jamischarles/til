# How do you type object keys in TypeScript?


Return type is a `Record` (generic) object. Where  they keys can be a string, and the value can be a string.

```ts
const getDeviceInfo = (): Record<string,string> => {
	return {
		browserName: globals.device?.browserName,
		deviceType: globals.device?.deviceType
	}
}
```

If you want to type a method or nested object you can do this:
```ts
  items: <Set<string>>new Set(),
```

# How can I type data from a JSON file in TypeScript?

# Simple answer: 
1. enable it in the TS config.
```json
"compilerOptions": {
    "resolveJsonModule": true,
}
```

2. Pull the json prop into type def:
`type sampleProp = typeof jsonDataProp;`


## When you want to ensure that the JSON shows up as an optional prop (maybe defined later etc):
```typescript 
type UcpConfig = Partial<GeneratedUcpConfig>;
```
Tells TS that GeneratedUcpConfig might have props on it, or might be `{}`. 


## More reading 
https://dev.to/nickytonline/strongly-typed-json-in-typescript-5gb2

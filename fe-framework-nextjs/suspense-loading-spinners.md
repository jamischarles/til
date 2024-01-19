# React / Next.js loading best practices with suspense...

> <Suspense> lets you display a fallback until its children have finished loading.
https://react.dev/reference/react/Suspense

```jsx
<Suspense fallback={<Loading />}>
  <SomeComponent />
</Suspense>
```


## Open questions
Q: Is suspense a provider?
Q: Can we hook into susense lifecycle hooks (or create our own) to capture timing data quickly and easily for suspense start, end etc...?

## More reading
https://react.dev/reference/react/Suspense
https://demystifying-rsc.vercel.app/server-components/streaming/ <-- really good on RSC vs RCC suspense...

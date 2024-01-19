# Input validation with zod (TS compatible)



## Zod type -> TS type https://github.com/colinhacks/zod#zod-enums
`type User = z.infer<typeof User>;`

## TS Type -> Zod validation
toZod lib?

Q: Is it better to do this, or just use zod types for most and infer the ts types? How does trpc like this?

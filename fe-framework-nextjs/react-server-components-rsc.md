# React server components (RSC) with Next.js

Allows us us to fetch data and render it entirely on the server. Instead of SSR (or other approaches) where we render the shell, but the data is fetched sepearately from the client via ajax or similar

> At a high level, React Server Components is the name for a brand-new paradigm. In this new world, we can create components that run exclusively on the server. This allows us to do things like write database queries right inside our React components!
https://www.joshwcomeau.com/react/server-components/

Allows us to write db queries INSIDE our react components (mind blown).

Server Components NEVER re-render (so things like side-effects matter far less). 


> The key thing to understand is this: Server Components never re-render. They run once on the server to generate the UI. The rendered value is sent to the client and locked in place. As far as React is concerned, this output is immutable, and will never change.*
https://www.joshwcomeau.com/react/server-components/#introduction-to-react-server-components-3

So RSC... 
* has no state, 
* has no effects
* not included in the client bundle
* like SSR v2.0

Most likely you'll end up using SSR WITH RSC, but you don't absolutely have to. 

Now the old-school components are called `Client Components`

`Client Components` render both on CLIENT AND SERVER.

## When and how can I use this?
As of Sep 2023:
>  there's only one way to start using React Server Components, and that's with Next.js 13.4+, using their brand-new re-architected “App Router”.



## How to define client components
`'use client';` use this directive at the top of the file...
`'use server';` is for `Server Actions` (totally different)

> Components are treated as Server Components by default


Guidance: Default to RSC if possible (for perf benefit). Use client components where needed.




https://www.joshwcomeau.com/react/server-components/#specifying-client-components-5


## Important rules:
* RSC cannot re-render (no state, no side effects, no prop changes)
* You don't have to add `use client` to every client component. Just the parent (import) one. 
* Client Components can only import other Client Components
 For these client boundaries ^ ONLY the import order matters. Not how it's rendered in the render tree.

 > the 'use client' directive works at the file / module level

Default to RSC, then move to client components if you need state and/or re-renders (changing props etc).


## Client boundaries & client component conversions
* If only one piece needs state, then you can move that out to it's own island boundary (my term). That way we keep most of the tree still as RSC.
(almost like having a pure tree, and then having as few as possible branches be impure by using state) Q: can we find a better name for this?


https://www.joshwcomeau.com/react/server-components/#boundaries-6


## Summary 
* if we need static data (even from DB), then use RSC.
* for any state / data that changes ON the page, use client components for that!!! (or could I use xstate for those pieces?) 

## More reading:
https://www.joshwcomeau.com/react/server-components/

# Next-js 13+ RSC-based routing
 

* layout.tsx is server only (RSC) and wraps the page.tsx
    * layout.tsx can be nested and will go up the directory path until `/app` 
    * layouts will NOT re-render (partial rendering: https://nextjs.org/docs/app/building-your-application/routing/linking-and-navigating#3-partial-rendering)
* `page.tsx` is the page that will be rendered under that route (can be RSC OR RCC)

## Learnings 
* `(folderName)` defines a group and WILL NOT be included in the url (route groups)
https://nextjs.org/docs/app/building-your-application/routing/route-groups


`(groupName)/testing/page.tsx` -> `/testing` 
This file will be avaiable at the following route ^ 

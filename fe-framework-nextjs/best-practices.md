# Next.js isms and best practices to follow

### If components are unique to a route, nest them under the route folder ie: 
* if grouped under route, prefix with `_` to avoid exposing that folder ie:
`app/checkout/_components/...`

> By having a special name for page files, Next.js allows you to colocate UI components, test files, and other related code with your routes. Only the content inside the page file will be publicly accessible. For example, the /ui and /lib folders are colocated inside the /app folder along with your routes.
https://nextjs.org/learn/dashboard-app/creating-layouts-and-pages#creating-the-dashboard-page


## Don't write a `<head>` tag yourself.
Instead use the metadata API
https://nextjs.org/docs/app/api-reference/file-conventions/layout#root-layouts

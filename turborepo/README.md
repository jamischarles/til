# Turborepo

## Starting an app the "proper" way:

`turbo run dev` - runs `npm run dev` across all apps
`turbo run dev --scope=js60` - runs `npm run dev` in js60 project only

`npm run dev -w=js60` seems to work too?

## Dependencies

`npm install` is run at the ROOT of the monorepo. That installs all the deps.

If you are managing deps the "turborepo" way, then all the `node_modules` are shared at the root level.
Q: How are version differences managed?
When there are version differences, those are installed in the local `node_modules` folder for that sub project.

If you need to override for a project, do this:
`npm install react@latest -w=js60` Installs react@latest for the `js60` workspace

only install deps for 1 app in the repo:
`npm i -w=js60`

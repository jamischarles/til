# How to upgrade your TS version for your app


1. `npm i typescript` at the version that you want (could be latest, but may not
   be...) 
2. Upgrade your type libraries to the version you have upgraded to.

Run `npm info [libName]` to see what tags are available. They all seemed uniform
for mine.

ie: `npm install @types/express-serve-static-core@ts3.7` Installs types for that
app for `TS3.7`

This will resolve TS errors much better and faster than you figthing with the
errors manually...

AFTER you are versioned properly, you can start fixing hte errors caused by TS
being more strict now or whatnot.


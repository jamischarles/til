# How to import json files with esm in node?

`import pkg from "./package.json" assert { type: 'json' };`

Relates to this error
`ERR_IMPORT_ASSERTION_TYPE_MISSING`


You can also combine with default reassignment
`import { default as myFile } from './myfile.json' assert {type: 'json'};`

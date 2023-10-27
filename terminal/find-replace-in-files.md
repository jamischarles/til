# How to find replace across files and folders

## Using rg (ripgrep)  (captures version number from package.json)
`rg -o  'version.*(\d.\d.\d)' package.json -r '$1'`
this will ONLY output the version `0.0.1`

## Using sad (modern sed) to replace
`fd Cargo.toml | sad '^version = "(\d\.\d\.\d)"' 'version = "9.9.9"'`
sad takes filenames as input

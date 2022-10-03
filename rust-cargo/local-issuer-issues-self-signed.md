# How do you resolve local self-signed issuer problems like we see with node/npm

## Options

### Accept it with env var (like we do with node)

CARGO_HTTP_CAINFO=path_to_local_cert

### Create a new cert yourself?

REALLY interesting solution to make your own certs (better than self signed?)
https://github.com/FiloSottile/mkcert

# Unable to get local issuer certificate

This can sometimes happen when you have node (or npm scripts) make a http
request to another site.

## Why does this happen? 
Usually this happens because your company overrides the root certificate on your
computer. When your node process makes http(s) calls it signs them for security with the certificate.
By default it won't include your company's custom certificate. This causes node
to complain that you aren't using a local certificate.

You need to use the custom-built version of node to use that custom
certificate, OR you have to attach the certificate to your node process.


## Related reading
https://stackoverflow.com/questions/29283040/how-to-add-custom-certificate-authority-ca-to-nodejs
https://medium.com/trabe/monkey-patching-tls-in-node-js-to-support-self-signed-certificates-with-custom-root-cas-25c7396dfd2a

## How to start node with the custom cert
```sh
# Configuration for node to trust the PayPal Proxy Certificates
# You'll need to replace the actual cert location with the cert that your
# company added
export NODE_EXTRA_CA_CERTS='/usr/local/etc/openssl/certs/paypal_proxy_cacerts.pem'
```



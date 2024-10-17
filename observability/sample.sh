

# start the desktop viewer (best to do this in a separate terminal)
otel-desktop-viewer

# configure otel-cli to send to our desktop viewer endpoint
export OTEL_EXPORTER_OTLP_ENDPOINT=http://localhost:4318

# use otel-cli to generate spans!
otel-cli exec --service my-service --name "curl google" curl https://google.com

# a more visually interesting example trace
carrier=$(mktemp)
sockdir=$(mktemp -d)
otel-cli span background \
   --service "otel-cli-example" \
   --name "otel-cli-example background span" \
   --tp-print \
   --tp-carrier $carrier \
   --sockdir $sockdir &
sleep 0.1 # give the background server just a few ms to start up
otel-cli span event --name "cool thing" --attrs "foo=bar" --sockdir $sockdir
otel-cli exec --service "otel-cli-example" --name "curl google" --tp-carrier $carrier curl https://google.com
sleep 0.1
otel-cli exec --service "otel-cli-example" --name "curl google" --tp-carrier $carrier curl https://google.com
sleep 0.1
otel-cli span event --name "another cool thing\!" --attrs "foo=bar" --sockdir $sockdir
otel-cli span end --sockdir $sockdir

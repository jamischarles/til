# How to sync clocks across machines

Or: How to sync server and client clocks.

## Problem:
I'd like to measure performance marks on the server (timestamp), and then compare it to perf marks on the client, but the clock drift between those two computers is inevitable.  

So... How do you solve this? You have to either sync the clocks, or get the offset between the two to normalize the time.


### Curl with network timing data
```sh
curl -v -L --output /dev/null --silent --show-error --write-out "lookup:        %{time_namelookup}\nconnect:       %{time_connect}\nappconnect:    %{time_appconnect}\npretransfer:   %{time_pretransfer}\nredirect:      %{time_redirect}\nstarttransfer: %{time_starttransfer}\ntotal:         %{time_total}\n" https://google.com
```
^ This will show headers, and timing data for the network request. And drop body response into black hole `/dev/null`.

https://netbeez.net/blog/http-transaction-timing-breakdown-with-curl/



## Approaches to try
https://blog.risingstack.com/measuring-http-timings-node-js/

## Options
https://expressjs.com/en/resources/middleware/response-time.html ?

## Reading
https://www.liquid.fish/current/syncing-the-browser-time
https://www.deconstructconf.com/2019/allison-kaptur-clock-skew-and-you (conf talk)
https://infiniteundo.com/post/25326999628/falsehoods-programmers-believe-about-time

https://jvns.ca/blog/2016/02/09/til-clock-skew-exists/


Current next.js discussion
https://github.com/vercel/next.js/discussions/62353


## Open source
Just use this?
https://github.com/NodeGuy/server-date

With next.js
https://github.com/vercel/next.js/issues/12382

https://gist.github.com/ethaizone/6abb1d437dbe406fbed6


## More reading
https://stackoverflow.com/questions/1638337/the-best-way-to-synchronize-client-side-javascript-clock-with-server-date
https://en.wikipedia.org/wiki/Network_Time_Protocol


https://gamedev.stackexchange.com/questions/93477/how-to-keep-server-client-clocks-in-sync-for-precision-networked-games-like-quak


https://johnresig.com/blog/accuracy-of-javascript-time/ (old)

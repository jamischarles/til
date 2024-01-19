# Tooling for load testing

## Tools to look at 
https://github.com/hatoo/oha
https://k6.io

k6s by grafana labs is amazing. 
https://k6.io
Open source on github



## Lao

```js
/**
 * Run from k6 go CLI.
 * Runs a load test against 2 or 3 test envs at the same time (each at 6 requests / second).
 * This depends on the k6 CLI (installed via homebrew).
 */

/* eslint-disable-next-line */
import http from "k6/http";
import { check, sleep } from "k6";

// test envs we want to run the tests on
// TODO: fill in your test ENV hosts
const host_control = "te-lnw-current";
const host_t1 = "te-lnw-killswitch-no-config";
const host_t2 = "te-lnw-killswitch-w-blocking";

// automagically picked up by the k6 CLI
//https://k6.io/blog/how-to-generate-a-constant-request-rate-with-the-new-scenarios-api/
export const options = {
  // vus: 10,
  // duration: '240s',
  scenarios: {
    constant_request_rate: {
      executor: "constant-arrival-rate",
      rate: 6, // 6 per second
      timeUnit: "1s",
      duration: "15m", // 15min
      preAllocatedVUs: 100, // how large the initial pool of VUs would be
      maxVUs: 200, // if the preAllocatedVUs are not enough, we can initialize more
    },
  },
};

// send request to signalFx via loggernodeweb
export default function () {
  const url = `https://www.${host_control}.qa.paypal.com/xoplatform/logger/api/logger/`;
  const url2 = `https://www.${host_t1}.qa.paypal.com/xoplatform/logger/api/logger/`;
  const url3 = `https://www.${host_t2}.qa.paypal.com/xoplatform/logger/api/logger/`;

  // set payload for each sfx metric
  // Sample payload for sending metrics to sfx via loggernodeweb
  // This is processed by beaver-logger-paypal
  const payload = {
    metrics: [
      {
        dimensions: {
          clientApp: "weasley",
          flavor: "MISSING",
        },
        metricEventName: "load_testing_with_k6",
        metricNamespace: "pp.xo.ui.custom.count",
        metricSrc: "weasley",
        metricValue: 1,
        name: "",
      },
    ],
  };

  const params = {
    headers: {
      "Content-Type": "application/json",
    },
  };

  // run the control and treatments in parallel
  // comment out the hosts we don't need (if you are running load test against only 1 or 2 test envs)
  const res = http.post(
    url,
    JSON.stringify(tagRequest(payload, host_control)),
    params
  );
  http.post(url2, JSON.stringify(tagRequest(payload, host_t1)), params);
  http.post(url3, JSON.stringify(tagRequest(payload, host_t2)), params);

  // console.log('###res', res); // for debugging
  // assertions can be run against status codes
  // check(res, { 'status was 200': (r) => r.status == 200 });
  sleep(1); // repeat every second?
}

/**
 * Modify `flavor` dimension so in sfx we can tell which host the request is coming from.
 */
function tagRequest(payloadObj, flavor) {
  const payload = Object.assign({}, payloadObj);

  // mutate and send off
  payload.metrics[0].dimensions["flavor"] = flavor;
  return payload;
}
```

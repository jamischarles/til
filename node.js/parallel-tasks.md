# How do you run things in parallel in node?
## Seoesveral options
- cluster
- child spawn (process fork)
- worker threads

Service workers are for offline features.
Worker threads are for parallel tasks.

## Thread vs process spawning a process 
- A thread is a SEGMENT of a process. Whereas spawning a process will start a
new process with its OWN copy of V8 running in that process. This means of
course the child processes will be more resource intensive. Separate processes
means isolation, which is good for certain tasks but makes inter-process
communication difficult (have to use IPC).

Cluster uses child processes under the hood. (basically isolated). 

## Workers
Workers are threads. Using one process. 

They can share data via sharedArray

```
Workers (threads) are useful for performing CPU-intensive JavaScript operations. They do not help much with I/O-intensive work. The Node.js built-in asynchronous I/O operations are more efficient than Workers can be.

Unlike child_process or cluster, worker_threads can share memory. They do so by transferring ArrayBuffer instances or sharing SharedArrayBuffer instances.
```
https://nodejs.org/api/worker_threads.html


Q: How can we ensure workers are used across CPU cores? Does this automagically
happen?


## Read more:
https://blog.battlefy.com/parallel-programming-in-node-js-is-so-slick-a5fa482755a2?gi=abd1da178267

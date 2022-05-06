

Q: Can I listen to a process' file access? Same with ajax calls?
So I can introspect and see what the process is doing under the hood and behind
the scenes? Would be amazing for profiling

Basically we'd have to listen to syscalls...


Usable profiling tools could be a boon for frontend... So many are way too
difficult to interact with and read or are very old...

? 
https://github.com/streamich/spyfs#want-to-spy-on-real-filesystem

READ THIS
https://jvns.ca/blog/2018/02/05/rust-bcc/

https://twitter.com/kylemathews/status/1497093101243961347


## Reading:
https://www.sciencedirect.com/topics/computer-science/file-profiling-process
https://blog.logrocket.com/an-introduction-to-profiling-a-rust-web-application/



RbSpy, and Julia's work on this topic
https://jvns.ca/juliasections/rbspy/
https://github.com/rbspy/rbspy
https://rbspy.github.io/


Q: Could start with something like this to figure out the mechanics?
https://nodejs.org/api/async_hooks.html#initasyncid-type-triggerasyncid-resource


## Rust reading
https://nnethercote.github.io/perf-book/profiling.html


## Lower level systcalls reading
https://docs.rs/linux/0.0.1/linux/syscall/index.html



## New experimenting tooling thoughts
Have somebody try it out...

Q: Is there promise here?
Q: What are the hard/sharp edges that make this unusable, or too painful to use?

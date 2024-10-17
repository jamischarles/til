# How to interop across languages


After compiling a c program for your system (architecture), you can run the outputted program as an executable.  

You can also reference that from a rust program via bindings.

If possible use a static library, so it doesn't have to perform the linking at runtime.   


## .dylib files are shared libraries 
This is a DYNAMIC library (harder?) 

> NOTE: It’s highly recommended that you build libgit2 as a static library for Xcode projects. This simplifies distribution significantly, as the resolution of dynamic libraries at runtime can be extremely problematic.
https://libgit2.org/docs/guides/build-and-link/

https://stackoverflow.com/questions/2339679/what-are-the-differences-between-so-and-dylib-on-macos

You can share these across langs.


## Calling rust code from other languages (node etc)
https://jakegoulding.com/rust-ffi-omnibus/

## Reading
https://git-scm.com/book/en/v2/Appendix-B%3A-Embedding-Git-in-your-Applications-Libgit2


Build target
https://stackoverflow.com/questions/40841670/what-is-the-difference-between-dylib-and-a-lib-in-ios

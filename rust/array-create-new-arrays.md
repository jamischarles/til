# How to create new arrays in Rust

```rust
let names = ["Bill","Sally","Jamis","Bill","Sally","Jamis"];
let names2 = ["Donald","Scrooge","Huey"];

let combinedNames = [names[0], names[2]];


// '&' is the "refreence operator" which makes it a slice
// Slice == pointer.
// You 'slice' an existing data container (like a string) into the 
// Slices are 'borrowed' (passed by ref)
// Allows safe and efficient access, w/o copying.
let name = &names[0..2];
```

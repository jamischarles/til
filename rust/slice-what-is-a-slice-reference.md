# What is a slice in Rust

```rust
// '&' is the "reference operator" which makes it a slice
// Slice == pointer (in memory).
// You 'slice' an existing data container (like a string) into the 
// Slices are 'borrowed' (passed by ref)
// Allows safe and efficient access, w/o copying.
let name = &names[0..2];
```

# How to return an expression from a function in Rust

```rust
fn add() {
	5*5 // omit semicolon for implicit return (similar to JS)
}
// OR

fn add() {
	return 5*5;
}
```

You can do it from if statements too...
```rust
if fizzish == "fizz" {
	"foo"
} else {
	"baz"
}
```

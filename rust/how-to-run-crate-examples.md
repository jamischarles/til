# How do you run examples for cargo crates

(most crates have `/examples`)


## How to do it
1. Add `[[example]]` section in `cargo.toml`
2. Specify id and path

```toml
[[example]]
name = "first"
path = "examples/simple.rs"
```

3. Run it with 
`cargo run --example first`

Victory!


## More reading
https://users.rust-lang.org/t/run-examples-in-subfolders-using-cargo/18154/3

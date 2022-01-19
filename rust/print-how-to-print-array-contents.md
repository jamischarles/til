# How to print array contents in Rust
```rust
fn main() {
    //println!("Hello, world!");

  let names = ["Bill","Sally","Jamis"];

  println!("2) My name is {} and {}", names[1], names[2]);

  // :? will print the array.
  // :#? is pretty-print
  println!("3) My name is {:?} and {}", names);

}
```

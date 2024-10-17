# How to convert a rust buffer (bytes) to a string (utf-8)

```Rust
use std::str;

// Rust how to convert bytes to utf8
let s = match str::from_utf8(line.content()) {
    Ok(v) => v,
    Err(e) => panic!("Invalid UTF-8 sequence: {}", e),
};

```

## More reading
https://stackoverflow.com/questions/19076719/how-do-i-convert-a-vector-of-bytes-u8-to-a-string

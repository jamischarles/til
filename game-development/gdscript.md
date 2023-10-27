# How to throw an exception at compile time


```c
# https://ask.godotengine.org/54948/throw-exception-or-error
assert( required_var != "", "ERROR: You must give required_var a value.");
```
https://ask.godotengine.org/54948/throw-exception-or-error



## How to get index in a for-in loop
```c
for i in len(selected_units):
    var unit = selected_units[i]
```


## Get type of obj / built-in
```c
# get type and name of node
node.name # get name of node
node.getClass() # get type of node

# get type of variable?
typeof("valume") ## ??? TODO: Verify
```
https://ask.godotengine.org/13029/is-there-a-corresponding-type-function-in-gdscript


## How to pass through clicks from HUD layer to lower click targets
Control->Mouse->Filter->Ignore/Pass through

By default it's `stop` which prevents the event from being passed through.




## Godot does method overloading
so calling
```c
someFunc('hello')
```

won't call this because the arity doesn't match
```c
func someFunc():
  pass
```


## How to set button_group in gdscript
doesn't seem to be possible :(

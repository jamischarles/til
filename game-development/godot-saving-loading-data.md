

2 options for easiest saving/loading of data:
1) JSON
Pro: Easy to read. Standard
Con: Everything becomes a string, and often cannot easily be turned back into godot data structures like vector

2) Binary
Pro: Smaller. Easy to turn back into godot data structures 
Con: Not human readable

`store_var()`
`get_var()`

suggested extension: .dat


3) As strings


More reading:
https://www.gdquest.com/tutorial/godot/best-practices/save-game-formats/
https://kidscancode.org/godot_recipes/4.x/basics/file_io/index.html !!!

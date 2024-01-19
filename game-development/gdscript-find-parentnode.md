# How to find a parentnode of a script  


```gdscript
get_tree().get_root().get_node("nodeName")
```

Using current_scene was necessary when the parent script was higher up the tree
```gdscript
@onready var scrollContainer = get_tree().current_scene.get_node('HBoxContainer/MarginContainer/ScrollContainer')
```


## Reading
https://ask.godotengine.org/5546/how-to-get-the-root-parent-from-a-child-node

# Why won't my control scale properly in gdscript?

From docs (see Scale prop):
```

Note: If the Control node is a child of a Container node, the scale will be reset to Vector2(1, 1) when the scene is instantiated. To set the Control's scale when it's instantiated, wait for one frame using await get_tree().process_frame then set its scale property.
```
https://docs.godotengine.org/en/stable/classes/class_control.html

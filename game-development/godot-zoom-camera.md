# How to zoom in a camera in Godot

Camera is a good fit when you have a large canvas you are only showing part of (outside of a scrollcontainer...)

## Zoom opposite
> The camera's zoom. A zoom of Vector(2, 2) doubles the size seen in the viewport. A zoom of Vector(0.5, 0.5) halves the size seen in the viewport.
S


```gdscript
set_zoom(Vector2(1,1)) will set the zoom to "normal", 1 world pixel fills 1 screen pixel.
set_zoom(Vector2(0.5,0.5)) should zoom in (as in, one world pixel will fill 4 screen pixels).
set_zoom(Vector2(2,2)) should zoom out (as in 4 world pixels will fill 1 screen pixel)
```
https://ask.godotengine.org/13764/what-does-camera2d-set_zoom-do-exactly-confusing-results


## How to exclude certain nodes from the camera zoom?

> The position of the camera within the tree matters not.
> Zoom is specific to the canvas layer. Which you can manipulate individually via the scale property.
https://www.reddit.com/r/godot/comments/11cmo09/possible_to_use_camera2d_zoom_only_for_a_specific/


Put those nodes in a canvasLayer node. That renders it seperately and exclude it from the zoom!!!


https://ask.godotengine.org/1336/best-way-to-realize-zoom-and-scroll-behavior-like-in-editor





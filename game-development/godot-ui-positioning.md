# UI Positioning and sizing in Godot

Most important things to understand.

## Scroll Containers
ALWAYS set minimium size. Things get squirrely if you don't.
If you set children to Vector2(0,0), then the first child that has a custom minimum size will be used (?verify)


## Containers
Containers manage children. NOT grandchildren. Unlike CSS.

So if your child isn't showing up in the place you expect make sure the parent is a container.
You can inherit if you go container->container->container->node/control


Top Level prop is like "Position: absolute" in CSS

## More reading 
https://docs.godotengine.org/en/4.1/tutorials/ui/gui_containers.html#container-layout

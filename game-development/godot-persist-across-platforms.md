

## Use the config file class (very similar to localStorage)
https://docs.godotengine.org/en/latest/classes/class_configfile.html


```gdscript
var some_variable = false

func load_values():
	var config = ConfigFile.new()
	var err = config.load("user://settings.cfg")
	if err != OK:
		return
	some_variable = config.get_value("some_section_name", "some_key_name")

func save_values():
	var config = ConfigFile.new()
	config.set_value("some_section_name", "some_key_name", some_variable)
	config.save("user://settings.cfg")
```
https://www.reddit.com/r/godot/comments/qdh7lj/how_to_save_game_data_on_ios/ ^

## Where do these `user://` files get stored?
https://ask.godotengine.org/4351/where-are-user-locations-on-each-platform
~/Library/Application\ Support/Godot/app_userdata/Matchy\ Match/state.cfg

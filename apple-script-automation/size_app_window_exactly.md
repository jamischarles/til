# How to size an app window exatly to px width & height with apple script?


https://stackoverflow.com/questions/48058409/get-windows-with-same-process-name-but-different-pid-in-applescript

```applescript
set theApp to "Godot"
set appWidth to 2732 / 2
set appHeight to 2048 / 2


-- comment

(* comment multi
line 
*)

set thePosition to {39, 578}
tell application "System Events"
	set pidList to the unix id of (processes whose name contains "Godot")
	
	repeat with someID in pidList -- loop 
		tell (first process whose unix id is someID)
			tell window 1
				set size to {appWidth, appHeight}
				--set position to thePosition
				
			end tell
		end tell
		--set item 1 of thePosition to (item 1 of thePosition) + 200 -- add 200 to the left (for the next window)
	end repeat
end tell
```

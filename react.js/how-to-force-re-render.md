# How to reset a component and re-mount it

Ocasionally you may want to reset the default value on a component that's
already been mounted.

Change the `key` prop, and it'll force a new instance of the component (I assume with new state etc)

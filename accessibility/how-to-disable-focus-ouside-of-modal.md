# How to disable focus outside of a modal

## Options

1. Use `el.inert = true` on any high level non-modal div to disable that tree completely.
   You need to enable this when the modal opens and disable it when it closes.

2. When you tab on last focusable modal element, you could return to 1st element

I prefer solution 1), because it doesn't keep browser controls from being focusable.

# How should a radio group/button behave with keyboard entry

## Keyboard interactions with radio group

- you can tab in and out of the radio group. Focus should land on checked item (or first if none are checked). tabbing leaves the radio group.
- arrow keys change radio selection and focus. Cycles from end back to beginning.
- Space toggles selection of focused radio button (checks AND unchecks)
- only 1 button within a radio group can be selected at a time
- Enter should submit form and have no effect on radio group
  https://developer.mozilla.org/en-US/docs/Web/Accessibility/ARIA/Roles/radio_role#keyboard_interactions

## When using non-standard elements as radio buttons (like a span or div):

1. Use the aria roles when you are using non-standard elements (like a div instead of `<input type="radio"/>`)
2. Use tabindex=0 to make those elements focusable.

Further reading:
https://developer.mozilla.org/en-US/docs/Web/Accessibility/ARIA/Roles/radio_role

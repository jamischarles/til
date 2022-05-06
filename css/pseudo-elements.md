

Pseudo elements are amazing for adding things that would normally need markup.
Like a chevron next to every link. Or some text after certain selectors. 

`::after`
`::before`

## Important things to note
- `::after` is like `appendChild()`. So `a::after` means the pseudo element is a
CHILD of the `<a>` and will inherit the styling and link behavior. In order to
avoid that wrap the link in a `<span>` or other tag:o

```html
<span data-tooltip-style="simple" data-tooltip-content="Hello world is a wonderful place."><a href="">Lake-town</a></span>
```

- You can automagically populate the `content:` value with `attr()` WOW.

- In order for it to show up (so it doesn't collapse):
```css
content: "";
display: inline-block; /* or block */
```

## Combining with :hover
```css
[data-tooltip-style]:hover::after {
	/* Now this will only apply when the element is styled. */
}
```


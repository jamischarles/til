# How to make a grid with variable number of columns as narrow as the content

This will result in a variable number of columns. Each as narrow as the content.

```css
.results {
  display: grid;
  /* grid-template-columns: 1fr 1fr; */
  grid-template-columns: repeat(auto-fill, 1fr);
  grid-auto-columns: min-content;
  grid-auto-flow: column;
  grid-column-gap: 5px;
}
```

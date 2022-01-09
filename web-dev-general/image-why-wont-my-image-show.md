# Why won't my image show up? - Absolute vs relative file paths

So your image isn't showing up.

When you have an image at this location:  
`moses.github.io/wdd230/lesson2/images/lake.jpg`

That you are referencing from this page:  
`moses.github.io/wdd230/lesson2/home.html`

You can write the path reference several ways.

When a path starts with a `/` slash it is called an `absolute` reference/url.

All other references are called a `relative` reference/url.

## Some examples
### Absolute url
`/wdd230/lesson2/images/lake.jpg`
Starting with a `slash` means **go to the root folder of the server** (the highest
parent folder). From there you have to navigate all the way back to the correct
child folder.

### Relative URLs
`../` means **start at the current folder** and **go to the parent** (up one folder).  
`../../../` means `start at the current folder` and `go to the parent 3x` (up three folders)

`images/` or `./images` mean essentinally the same thing: **start at the current
folder and find the images child folder**.

`lake.jpg` or `./lake.jpg` mean essentinally the same thing: **start at the current
folder and find the lake.jpg image in this folder**.

`./` The `.` means **this folder**

When a path starts with a `.` or `..` or a `file name` or `folder name` it is called a **relative** reference/url.


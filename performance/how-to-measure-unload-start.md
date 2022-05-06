# How can I measure when a refresh / page navigation has started?
This used to be handled by `performance.timing.navigationStart` (deprecated).

Now use `performance.timeOrigin`
https://w3c.github.io/navigation-timing/#dom-performancetiming-navigationstart


## How can I detect page refresh?
`performance.getEntriesByType("navigation").find(entry=>entry.type==="reload");`
(returns relative timing only) 
Q: Can we offset by `performance.timeOrigin` ?

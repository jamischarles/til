# Algorithms

## Simple Search
O(n). Loop through each item.

## Binary Search
O(log n). Requires sorted list. Split the list in half


Two algorithms for graph traversal

> Unlike a binary tree, we don’t necessarily have a root and we definitely don’t have a predetermined structure of branches. What do we have?
https://jarednielsen.com/data-structure-graph-depth-first-search/

Goal: Pick any node as a starting point, then you are looking for a specific
target.
## Depth first search
`when going to the depth is important`
> With Depth-First Search, we follow the paths of the edges connected to our starting vertex, or search key, one at a time, until we reach the end, then we backtrack and search the alternate paths, until we find the vertex we are looking for or we arrive back where we started.

Problem it solves:
> There are a number of specific use cases, such as finding the bridges in a graph, finding the solution to a maze, or defining the topology of a graph.

## Breadth first search
`when all children need to process first`
> With Breadth-First Search, we search all of the edges connected to a vertex before moving on to search the edges of the connected vertices.

Problem it solves:
- finding shortest path in a graph

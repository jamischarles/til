# Data structures


## Array (A list)
Good for retrieval of exact index. Less ideal for insertion (because you have to
move the rest of the array). If you need frequent insertion, use a linked list
instead.

## Linked list (A list)
Good for insertion. Slower for retrieval. A series of objects that store the ref
to the next object (similar to my CRDT use case). When you add a new item, you
just have to update the prior object in the chain.

## Graph
> a structure amounting to a set of objects in which some pairs of the objects are in some sense “related”.
A map or a social network is also a good example of a graph
https://en.wikipedia.org/wiki/Graph_(discrete_mathematics)


### What problems does a graph solve?
> Optimization: We can use the graph data structure in conjunction with an optimization algorithm for determining an optimal path, such as GPS

> Network topology: We can use the graph data structure when modeling network topology, such as the internet or your friends on Facebook!

`Tree vs graph`
> Yes, a tree data structure is a series of nodes in relationship to one another, but graphs differ from trees in that trees always follow the same structure. The relationships between nodes are predetermined: a root with two children. We don’t know what the structure of our graph will look like in advance, so when we implement a graph class, tracking the relationship between vertices is more important than the vertices themselves.
https://jarednielsen.com/data-structure-graph-javascript/

## Binary Tree
Each node has at most 2 children. 

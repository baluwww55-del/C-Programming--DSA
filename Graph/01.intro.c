// Introduction to graph data structure . 

// graph is a non linear data structure consisting of nodes and edges.
// there are two types of graphs:
// 1) directed graph.
// 2) undirected graph.

// 1) directed graph : each edges have direction . 
// 2) undirected graph : each edges have no direction . 

// how do we study graph representation ?
// *) graph representations can be done by adjacency matrix table 0,1,2,3 like this 
// we define datatypes depends on the language we are using to represent graph ex: in c like boolean int 
// boolean : true/false.
// int : 0,1 .
// so this is the representation of graph using non linear data structure and representing using the adjacency matrix table. 

// for weighted graphs instead of one for an edge store its weight. 

// graphs can be represented using linked list also: 
// 2) types of lists :
// 1) for vertices :
// 2) for edges :
// run time complexity of the graph : 0(n*n) (nsquare)

// and we can represent the graph using hybrid representation also . 
// vertices are stored in array 1. 
// edges are stored in linked list. 

// Traversing in an graph :
// 1) BFS : Breadth first search . (implemented using queue)
// 2) DFS : Depth first search . (implemented using stack) stack : 1) expression evaluation , recursion. 


// 1) BFS : Breadth first search can be implemented using queue . 
// 2) rules to be used BFS:
// *) first take source to enter the graph 
// *) and take neighbours means encounter neighbours and their neighbours. 
// *) encounter till you reach the end . 

// this is how u can solve the breadth first search using graph representation and implemented using queue data structure . 

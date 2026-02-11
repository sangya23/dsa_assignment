# Documentation for Q7

This program implements Dijkstra’s Algorithm to find the shortest path from a given source vertex to all other vertices in a weighted graph.

## (a) Explanation of how the data structures are defined:

* ### Adjacency Matrix:
  &nbsp; The graph is represented using a 2D array graph\[Max]\[Max], where Max is defined as 100.

* ### Distance array:
  &nbsp; This array stores the shortest known distance from the source vertex to every other vertex.

* ### Visited array:
  &nbsp; This array keeps track of whether a vertex has been included in the shortest path tree so as to not repeat it.


## (b) Description of the functions implemented, including their purpose:

The functions used are:

* ### int minDistance(int dist\[], int visited\[], int V):
  &nbsp; It finds the vertex with the minimum distance value among the vertices that have not yet been visited and returns the index of the vertex with the smallest distance.

* ### void dijkstra(int graph\[Max]\[Max], int V, int src):
  &nbsp; This function implements Dijkstra’s algorithm.
  It performs the following steps:
&nbsp; * Initializes all distances to infinity (INT_MAX).
&nbsp; * Sets the source vertex distance to 0.
&nbsp; * Repeatedly selects the unvisited vertex with the smallest distance.
&nbsp; * Updates the distance values of its adjacent vertices if a shorter path is found.
&nbsp; * Prints the final shortest distance from the source to all vertices.


## (c) An overview of how the main() method is organized.

* The main() method asks users to input the number of vertices and edges. Then, it initializes the adjacency matrix with 0 and takes information for input edge in form of source, destination and weight. It then upadates adjacency matrix accordingly. Then, it asks users to enter the source vertex. It calls the function 'dijkstra' to compute and display the shortest paths.

## (d) A sample output of a complete run of the program.

![Program Output](https://github.com/sangya23/dsa_assignment/blob/83c8e0fea6ba5bb6dc204d97f6333e2890cce672/output%20images/output_7.png)

&nbsp;

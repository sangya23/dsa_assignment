# Documentation for Q5

This progrma implements an undirected graph using an adjacency matrix and performs breadth-first search(BFS) and depth-first search(DFS)

## (a) Explanation of how the data structures are defined:

* ### Adjacency matrix (Array data structure):
  &nbsp; It is a 2D integer array where adj[i][j]=1 indicates that there is an edge between vertex i and vertex j.
  
* ### Visited matrix (Array data structure):
  &nbsp; It is a 1D used to keep track of visited vertices to prevent infinite loops.
  
* ### Queue:
  &nbsp; An array-based queue is used to manage the order of vertices to be visited in BFS.



## (b) Description of the functions implemented, including their purpose:

The functions used are:

* ### void bfs(int start):
  &nbsp; It traverses the graph level-by-level starting from start vertex. It uses queue to visit all neighbors before moving to next level.

* ### void dfs(int v):
  &nbsp; It uses recursion to travel as deep as possible along each branch.

* ### void display():
  &nbsp; It displays the adjacency matrix created from the vertices the the user inputs.



## (c) An overview of how the main() method is organized.

* The main() method initializes the adjacency matrix with zeros and asks the user for the number of vertices and edges. It also asks the users for the pairs of vertices that form an edge. Then, it executes both BFS and DFS traversals.

## (d) A sample output of a complete run of the program.


* ### Output case when bfs and dfs are same :

![Program Output](https://github.com/sangya23/dsa_assignment/blob/02082dce5725633eee926ee2891f76f528f104fc/output%20images/output_5_1.png)


* ### Output case when bfs and dfs are same :

![Program Output](https://github.com/sangya23/dsa_assignment/blob/02082dce5725633eee926ee2891f76f528f104fc/output%20images/output_5_2.png)



&nbsp;

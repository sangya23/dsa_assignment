# Documentation for Q4

This program demonstrates the implementation of doubly linked list and supports insertion at the beginning, insertion after a given node, deletion of a specific node, and displaying the data of the linked list.

## (a) Explanation of how the data structures are defined:

* ### Doubly linked list:

&nbsp;	Doubly linked list is implemented by declaring a structure 'Node' with integer data, pointer prev which points to previous node and a pointer next which points to the next node.

## (b) Description of the functions implemented, including their purpose:
The functions used are:

* ### struct Node *createNode(int data):

&nbsp;	It dynamically allocates memory for a new node. It initializes data with input data, then prev and next with NULL. It returns the address of the new node.

* ### void insertatbegin(int data): 

&nbsp;	It inserts a new node at the beginning of the linked list.

* ### void insertafter(struct Node *prevnode, int data)
&nbsp; It inserts a new node after a given node. It handles cases when the previous node is null as well.

* ### void deletenode(struct Node *delnode):
&nbsp;	It deletes a specified node from the list. It handles cases when the list is empty and when it is head. It frees the allocated memory after deletion.

* ### void display():
&nbsp;	It displays the data of each node from first to last.


## (c) An overview of how the main() method is organized.

* The main() calls functions 'insertatbegin' and 'insertafter' to insert nodes to the linked list and 'display' to display the data of each node. Then calls the function 'deletenode' to delete a node. Lastly, it calls 'display' again to print the data of the linked list after deletion.


## (d) A sample output of a complete run of the program.
![Program Output](https://github.com/sangya23/dsa_assignment/blob/262bfff6402ed1d72401c8157ef8e30febbdf92e/output%20images/output_4.png)

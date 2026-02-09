# Documentation for Q3

This program prints the forward and reverse traversal for a doubly linked list.

## (a) Explanation of how the data structures are defined:

* Doubly linked list:

&nbsp;	Doubly linked list is implemented by declaring a structure 'Node' with integer data, pointer prev which points to previous node and a pointer next which points to the next node.

## (b) Description of the functions implemented, including their purpose:

The functions used are:

* void insertatbegin(int x):

&nbsp;	It inserts a new node at the beginning of the linked list. The node is dynamically allocated.

* void insertatend(int n): 

&nbsp;	It inserts a new node at the end of the linked list. The node is dynamically allocated.

* void reversetravese():

&nbsp;	It displays the data of each node from last to first.

* void forwardtraverse():

&nbsp;	It displays the data of each node from first to last.


## (c) An overview of how the main() method is organized.

* The main() calls functions 'insertatbegin' and 'insertatend' to insert nodes to linked list and calls 'forwardtraverse' and 'reversetraverse' to display the data of each node.


## (d) A sample output of a complete run of the program.

![Program Output](https://github.com/sangya23/dsa_assignment/blob/7350d373a1d4cec59c0c30074c5f4c46b9fe9382/output%20images/output_3.png)





# Documentation for Q6

This program demonstrates how to build min and max heap from a given array using the heap data structure.

## (a) Explanation of how the data structures are defined:

* ### Array:
  &nbsp;   The heap is implemented using an array representation.
  For any element at index i:
    * Left child is at index 2*i + 1
    * Right child is at index 2*i + 2
    * Parent is at index (i - 1) / 2


## (b) Description of the functions implemented, including their purpose:

The functions used are:

* ### void swap(int *a, int *b):
  &nbsp; This function swaps the values of two integers using pointers. It is used to maintain the heap property when rearranging elements.
  
* ### void heapify(int arr\[], int n, int i, int isminheap):
  &nbsp; This function checks whether the subtree with root at index i satisfies the heap property. For a Max Heap, the parent node must be greater than its children. For a Min Heap, the parent node must be smaller than its children. If the heap property is violated, it swaps the elements and recursively calls itself to fix the affected subtree.

* ### void buildheap(int arr\[], int n, int isminheap):
  &nbsp; It builds a heap from an unsorted array. It starts from the last non-leaf node and calls heapify for each node up to the root.

   ### void displayheap(int arr\[], int n):
  &nbsp; It displays all elements of the arrray.




## (c) An overview of how the main() method is organized.

* The main() method initializes an array {12, 11, 13, 5, 6, 7}. It then prints the size of array before heapifying then calls 'buildheap' function with ismeanheap=0 to create Max heap and display the result. Lastly, it calls 'buildheap' function with isminheap=1 to create Min heap and display it.  

## (d) A sample output of a complete run of the program.

![Program Output](https://github.com/sangya23/dsa_assignment/blob/1a2c4c5b57940a046e9d248534337d06b619ba51/output%20images/output_6.png)

&nbsp;

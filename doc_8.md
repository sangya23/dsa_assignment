# Documentation for Q8

This program generates N random integers in the range [1, 1000], where N is provided by the user at runtime.


## (a) Explanation of how the data structures are defined:

* ### Array:
  &nbsp; The array 'arr\[N]' is used to store N randomly generated integers where the size N is provided by the user at runtime. Temporary arrays 'L\[]' and 'R\[]' are used during merge sort.


## (b) Description of the functions implemented, including their purpose:

The functions used are:

* ### void printArray(int arr\[], int n):
  &nbsp; It prints all elements of the array.
  
* ### void bubbleSort(int arr\[], int n, int *comp, int *swap):
  &nbsp; It repeatedly compares adjacent elements and swaps them if they are in the wrong order. It keeps track of number of counts and swaps. Time complexity is O(n^2).

* ### void selectionSort(int arr\[], int n, int *comp, int *swap):
  &nbsp; It finds the minimum element in the unsorted portion and places it at the correct position. It also keeps track of number of counts and swaps. Time complexity is O(n^2).

* ### void insertionSort(int arr\[], int n, int *comp, int *swap):
  &nbsp; It builds the sorted array one element at a time by inserting each element into its correct position. It also keeps track of number of counts and swaps. Time complexity is O(n^2) for the worst case and O(n) for the best case.

* ### void mergeSort(int arr\[], int l, int r, int *comp):
  &nbsp; It recursively divides the array into halves and calls the merge function to combine them. It counts comparisions. Time complexity is O(nlog n).
  

## (c) An overview of how the main() method is organized.

* The main() method performs the following steps:
  * Prompts the user to enter the number of elements (N).
  * Generates N random integers between 1 and 1000 using rand().
  * Displays the numbers before sorting.
  * Displays a menu for choosing a sorting algorithm.
  * Calls the sorting function that user chooses.
  * Displays the numbers after sorting.
  * Prints the total number of comparisons and total number of swaps

## (d) A sample output of a complete run of the program.
* ### Output for bubble sort:
![Program Output](https://github.com/sangya23/dsa_assignment/blob/83c8e0fea6ba5bb6dc204d97f6333e2890cce672/output%20images/output_8_bubble.png)

* ### Output for selection sort:
![Program Output](https://github.com/sangya23/dsa_assignment/blob/83c8e0fea6ba5bb6dc204d97f6333e2890cce672/output%20images/output_8_selection.png)

* ### Output for insertion sort:
![Program Output](https://github.com/sangya23/dsa_assignment/blob/c851c95e283a6172eb6db27aa58086dcf7e604c4/output%20images/output_8_insert.png)

* ### Output for merge sort:
![Program Output](https://github.com/sangya23/dsa_assignment/blob/c851c95e283a6172eb6db27aa58086dcf7e604c4/output%20images/output_8_merge.png)


&nbsp;

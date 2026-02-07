#Documentation for Q1



This program checks whether a given mathematical expression contains a balanced number of parentheses. It supports '()','{}','\[]'.



##(a) Explanation of how the data structures are defined:

* Stack: 

&nbsp;	Stack is implemented using array 'stack' and an integer 'top' to track the top element.



##(b) Description of the functions implemented, including their purpose:



The functions used are:

* void push(char c):

&nbsp;	It pushes opening bracket to the stack by increasing the top and inserting the bracket to the top.

* int pop(): 

&nbsp;	It pops the variable at the top and returns it.

* int isMatching(char open, char close):

&nbsp;	It checks whether the opening bracket has a matching closing bracket and returns if brackets match, else it returns 0.

* int isBalanced(char exp\[]):

&nbsp;	It checks whether all parentheses in the expression is balanced by traversing the expression and pushing opening bracketing using 'push' function, checking whether all opening brackets have a matching closing bracket using 'pop' function and calling function 'isMatching'. 

It returns 1 if the brackets are balanced and 0 if not.




##(c) An overview of how the main() method is organized.

* The main() method asks users to input an expression, then calls the 'isBalanced' function to check whether the expression is balanced and displays whether the parentheses are balanced or not balanced.
* 

##(d) A sample output of a complete run of the program.

* Output when parentheses are balanced:

![Program Output](https://github.com/sangya23/dsa_assignment/blob/18bcf8ee525cdb80d17f3c318ae588559b2e26ea/output%20images/output_1_1.png)



* Output when parentheses are not balanced:

![Program Output](https://github.com/sangya23/dsa_assignment/blob/4164cbd6e1bf8e56646cdbedd5409143c98693c0/output%20images/output_1_2.png)



&nbsp;


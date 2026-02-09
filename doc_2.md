Documentation for Q2

This program converts a given infix mathematical expression to postfix and then evaluates it.


(a) Explanation of how the data structures are defined:

* Stack: 

&nbsp;	Stack is implemented using array 'stack' and an integer 'top' to track the top element. 
There are two stacks are used. The first stack is to store operators during conversion from infix to postfix and the second to store operands to evaluate postfix expression.



(b) Description of the functions implemented, including their purpose:

The functions used are:

* void push(char x):

&nbsp;	It pushes a character onto the stack by increasing the value of top.

* char pop(): 

&nbsp;	It removes and returns the top element by decreasing the value of top.

* int priority(char x):

&nbsp;	It returns the precedence of operator.

* void infixToPostfix(char infix\[], char postfix\[]):

&nbsp;	It converts infix to postfix by adding operands to array and pushing and popping the operators based on precedence.

* void evaluatePostfix(char postfix\[]):

&nbsp;	It evaluates the postfix expression where numbers are pushed to an integer stack and each operator pops 2 operands, performs the operation and pushes the result onto the stack again. The final result is returned from the stack.



(c) An overview of how the main() method is organized.

* The main() method asks users to input an infix expression, then calls the 'infixToPostfix' function to convert the expression. Then displays the postfix expression. Lastly, it calls the 'evaluatePostfix' function to compute the result and display it.

(d) A sample output of a complete run of the program.


![Program Output](https://github.com/sangya23/dsa_assignment/blob/58a8b868f5771ca3f2e77fa4fdadfc6da6370492/output%20images/output_2.png)



&nbsp;

#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 50
char stack[MAX_SIZE];
int top=-1;

void push(char c)
{
	if (top==MAX_SIZE-1)
	{
		printf("The stack is full.\n");
		return;
	}
	stack[++top]=c;
}
int pop()
{
	return stack[top--];
}

int isMatching(char open, char close) {
    if (open == '(' && close == ')') return 1;
    if (open == '{' && close == '}') return 1;
    if (open == '[' && close == ']') return 1;
    return 0;
}

int isBalanced(char exp[]) {
	int i;
    for (i = 0; i < strlen(exp); i++) {
        char ch = exp[i];

        if (ch == '(' || ch == '{' || ch == '[')
            push(ch);

        else if (ch == ')' || ch == '}' || ch == ']') {
            if (top == -1)
                return 0;

            char open = pop();
            if (!isMatching(open, ch))
                return 0;
        }
    }
    return (top == -1);
}

int main() {
    char exp[MAX_SIZE];

    printf("Enter expression: ");
    gets(exp);

    if (isBalanced(exp))
        printf("The expression has balanced number of parentheses.\n");
    else
        printf("The expression doesn not have balanced number of parentheses.\n");

    return 0;
}

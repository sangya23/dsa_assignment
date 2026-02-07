#include <stdio.h>
#include <stdlib.h>
struct Node
{
	int data;
	struct Node * prev;
	struct Node * next;
};
struct Node *head=NULL;
void insertatbegin(int x)
{
	struct Node *newnode=(struct Node*)malloc(sizeof(struct Node));
	newnode->data=x;
	newnode->prev=NULL;
	newnode->next=NULL;
	if (head==NULL)
	{
		head=newnode;
	}
	else
	{
		newnode->next = head;
	head->prev = newnode;
	head = newnode;
	}
}
void insertatend(int n)
{
	struct Node *newnode=(struct Node*)malloc(sizeof(struct Node));
	newnode->data=n;
	newnode->prev=NULL;
	newnode->next=NULL;
	if (head==NULL)
	{
		head=newnode;
	}
	else
	{
		struct Node *temp=head;
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=newnode;
		newnode->prev=temp;
	} 
}

void reversetraverse()
{
	if (head==NULL)
	{
		printf("There is no element in the linked list.\n");
		return;
	}
	struct Node *temp=head;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	printf("The reverse traversal is:\n");
	while (temp!=NULL)
	{
		printf("%d ", temp->data);
		temp=temp->prev;
	}
	printf("\n");
}

void forwardtraverse()
{
	if (head==NULL)
	{ printf("The linked list is empty\n");
		return;
	}
	struct Node *temp=head;
	printf("The forward traversal is:\n");
	while(temp!=0)
	{
		printf("%d ", temp->data);
		temp=temp->next;
	}
	printf("\n");
}
int main()
{
	insertatbegin(10);
	insertatbegin(20);
	insertatbegin(30);
	insertatend(25);
	insertatend(7);
	forwardtraverse();
	reversetraverse();
}

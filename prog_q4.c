#include <stdio.h>
#include <stdlib.h>

struct Node {
	int data;
	struct Node *prev;
	struct Node *next;
};
struct Node *head=NULL;

struct Node *createNode(int data)
{
	struct Node *newnode=(struct Node *) malloc(sizeof(struct Node));
	newnode->data=data;
	newnode->prev=NULL;
	newnode->next=NULL;
	return newnode;
}


void insertatbegin(int data)
{
	struct Node *newnode=createNode(data);
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


void insertafter(struct Node *prevnode,int data)
{
	if (prevnode==NULL)
	{
		printf("The previous node is NULL.\n");
		return;
	}
	struct Node *newnode=createNode(data);
	newnode->next=prevnode->next;
	newnode->prev=prevnode;
	if (prevnode->next!=NULL)
	{
		prevnode->next->prev=newnode;
	}
	prevnode->next=newnode;
}

void deletenode(struct Node * delnode)
{
	if (head==NULL || delnode==NULL) return;
	if (head==delnode)
	{
		head=delnode->next;
	}
	if (delnode->next != NULL)
	{
		delnode->next->prev=delnode->prev;
	}
	if (delnode->prev!=NULL)
	{
		delnode->prev->next=delnode->next;
	}
	printf("Deleted %d\n", delnode->data);
	free(delnode);
}

void display()
{
	struct Node *temp=head;
	while (temp!=NULL)
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
	insertatbegin(35);
	insertatbegin(40);
	insertafter(head->next, 25);
	insertafter(head, 15);
	printf("List before deletion:\n");
	display();
	
	deletenode(head->next->next);
	printf("\nList after deletion:\n");
	display();
	return 0;
	
}

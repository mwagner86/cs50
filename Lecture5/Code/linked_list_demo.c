#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	int number;
	struct node *next;
}
node;

void linkedlist()
{
node *list = NULL;
node *n = malloc(sizeof(node)); 
// malloc takes one argument, the number of bytes you want to allocate dynamically,
// and it returns to you the address of the first of those bytes.
// malloc return always an address, so for storing that address you need *n (or any other name)

if (n != NULL)
// any time in C, when you call a function that returns to you a pointer, you should almost 
// always check if it is NULL or not NULL. You do not want to touch it, if it is NULL.
// NULL means there is no valid address here.
{
	n->number = 1; 
	n->next = NULL;
	// (*n).number = 1; same thing as -> operator: . operator go inside of that structure and inside of that variable called number
}
list = n;
if (n != NULL)
{
	n->number = 2; 
	n->next = NULL;

}

list->next = n;

if (n != NULL)
{
	n->number = 3; 
	n->next = NULL;
}
list->next->next = n;
}

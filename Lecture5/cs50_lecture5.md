## Lecture 5 Week 6

[Youtube Video](https://www.youtube.com/watch?v=2T-A_GFuoTo "Lecture 5 - Data Structures")

## Playlist 2020
https://www.youtube.com/watch?v=YoXxevp1WRQ&list=PLhQjrBD2T382_R182iC2gNZI9HzWFMC_8

# Shorts

## Data Structures
[Youtube Short 1] (https://www.youtube.com/watch?v=3uGchQbk7g8 "Data Structures")
## Singly-Linked Lists
[Youtube Short 2] (https://www.youtube.com/watch?v=zQI3FyWm144 "Singly-Linked Lists")
## Hash Tables
[Youtube Short 3] (https://www.youtube.com/watch?v=nvzVHwrrub0 "Hash Tables")
## Tries 
[Youtube Short 4] (https://www.youtube.com/watch?v=MC-iQHFdEDI "Tries")


## Notes:

- array 
	- contiguous blocks of memory
	- not easily resizable

- adding elements to an array
O(n)
Ω(1)


- struct
-	. dot operator
-	* dereference operator

- -> . and * operator combined
- 0x0 = NULL, absence of an address

## Linked list

- list of numbers that are somehow linked together.
- a collection of nodes that are connected by pointers.
- the trade-off is to use more memory.

```
typedef struct
{
	string name;
	string number;
}
person;
```

```

typedef struct node
{
	int number;
	struct node *next;
}
node;

```

- a node does not exist until that last line of code is executed
- you can add an additional word after the keyword struct
- typedef struct node is a hind for the compiler, similar to prototyping,
something called a struct node is going to exist.
- you can then use it inside that datastructure and call it "next".
- structure node is created.

```
if (n != NULL)
{
	(*n).number = 1;
}

// same as

if (n != NULL)
{
	n ->number = 1;
}
```

```
if (n != NULL)
{
	n ->next = NULL;
}
```

## Linked list demo

- you need a pointer to start, to point at the first node
- use malloc to allocate dynamically
- everytime you create a new node you allocate memory for it
- nodes can be anywhere in the computers memory
- you cannot use binary search because of that.
- Linked list is a dynamic data structure, you allocate memory whereever it is availabe
and you remember where that is by "stitching" things together with pointers.

```
node *list = NULL;
node *n = malloc (sizeof(node)); 
// malloc takes one argument, the number of bytes you want to allocate dynamically,
// and it returns to you the address of the first of those bytes.
// malloc return always an address, so for storing that address you need *n (or any other name)

if (n != NULL)
// any time in C, when you call a function that returns to you a pointer, you should almost 
// always check if it is NULL or not NULL. You do not want to touch it, if it is NULL.
// NULL means there is no valid address here.
{
	(*n).number = 1; // . operator go inside of that structure and inside of that variable called number
}
```
- see linked_list_demo.c: not final, careful!

- Running time of searching a linked list:
O(n)
- Running time of inserting into a linked list
0(1)
	- if you don't care about sorted order and just want to insert it (for example at the start.)
	- constant time if you don't care about the order.

## realloc()
- will hand you a new chunk of memory that will be big enough for the new values.

---

- orders of operation matter
- don't orphan nodes

```
n->next = list;
list = n;
```

---
1:20
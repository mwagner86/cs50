## Dynamic Memory Allocation

https://www.youtube.com/watch?v=xa4ugmMDhiE

- We've seen one way to work with pointers,
namely pointing a pointer variable at another variable that already exists in our system.
	- This requires us to know exactly how much memory our system will need at the moment our program
	is compiled.

- What if we don't know how much memory we'll need at compile-time?
How do we get access to new memory whiel our program is running?

- We need to use dynamic memory allocation to get new memory in our program
while the program is already running.

- We can use pointers to get access to a block of **dynamically-allocated memory** at runtime.

- Dynamically allocated memory comes from a pool of memory known as the **heap**.

- Prior to this point, all memory we've been working with has been coming from a pool of memory known as the **stack**.


| **text**	|
| :-------------: |
|	initialized data	|
|	uninitialized data	|
|	heap	|
|	...		|
|	...		|
|	...		|
| 	stack 	|
|	environmental variables	|

- stack grows "up"
- heap grows "down"

---

- we need to use a new function called malloc().
#include <stdlib.h>

- We get this dynamically-allocated memory by making a call to the C standard library function
malloc(), passing as its parameter the number of bytes requested.

- After obtaining memory for you (if it can), malloc() will return a pointer to that memory.

- What if malloc() can't give you memory? It'll hand you back NULL.

- **ALWAYS CHECK FOR NULL AFTER MALLOC**

---

```
// statically obtain an integer
int x;

// dynamically obtain an interger.
int *px = malloc(4);
// there are four bytes in an int, so malloc(4)
// alternatively use the sizeof operator.
int *px = malloc(sizeof(int));
// you pass in a type to overturn how many bytes that type takes up on the system.
```

- malloc is going to try you find 4 bytes that are next to each other on the heap
and return you a pointer to that memory called *px

---

```
// get an integer from the user
int x = get_int();

// array of floats on the stack
float stack_array[x];

// array of floats on the heap
float *heap_array = malloc(x * sizeof(float));
```

- Here's the trouble: Dynamically-allocated memory is not
automatically returned to the system for later user when the function in which it's created 
finishes execution.

- Failing to return memory back to the system when you're finished with it results in a
** memory leak** which can compromise your system's performance.

- When you finish working with dynamically-allocated memory, you must free() it.
	-basically what you passed to free is a pointer to any memory that you have dynamically
	allocated previously.
	- That's telling the system: "I'm done! You can use this memory again."

```
char *word = malloc(50 * sizeof(char));

// do stuff with word

//now we're done working with that block

free(word)
```
--- 

### Three golden rules

1. Every block of memory that you malloc() must susequently be free()d.
2. Only memory that you malloc() should be free()d.
	- The system is going to take care of releasing all statically declared memory for you.
3. Do not free() a block of memory more than once.

--- 

```
int m;
int *a;
int *b = malloc(sizeof(int));
a = &m;
a = b;
m = 10;
*b = m + 2
free(b);
*a = 11 // unpredictable behavior, since b has been freed.
```

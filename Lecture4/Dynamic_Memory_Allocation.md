## Dynamic Memory Allocation

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
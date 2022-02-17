#include <stdio.h>
#include <stdlib.h>

int main(void)

/* simple implementation of a list. array version
{
	int list [3];

	list[0] = 1;
	list[1] = 2;
	list[2] = 3;

	for (int i = 0; i < 3; i++)
	{
		printf("%i\n", list[i]);
	}
}
*/

{
	int *list;

	list = malloc(3 * sizeof(int));
	if (list == NULL)
	{
		return 1;
	}
	list[0] = 1;	// *list = 1;
	list[1] = 2;	// *(list + 1) = 2;
	list[2] = 3;	// *(list + 2) = 3;

	//int *tmp = malloc(4 * sizeof(int)); // allocating enough space for a 4th element
	int *tmp = realloc(list, 4 * sizeof(int));
	if (tmp == NULL)
	{
		free(list); // if not able to allocate memory, free list and stop
		return 1;
	}

/* you don't have to use this code anymore, since you're using realloc()
	for (int i = 0; i < 3; i++) // copy the content of the old list in tmp variable
	{
		tmp[i] = list [i];
	}
*/	
	tmp[3] = 4; // set the 4th element to 4

	list = tmp; // copy the values of temp, which are now 4 elements, temp into list and use the better named variable.

	for (int i = 0; i < 4; i++)
	{
		printf("%i\n", list[i]);
	}
	free(list); // free the old list
}

// when you are using square bracket notation, you're using statically allocated memory on the stack.
// you are putting it into the stack frame
// if however you use malloc(), you take memory from the heap, which you can resize.
#include <stdio.h>
#include <stdlib.h>

/* scans for user input int.

int	main(void)
{
	int x;
	printf("x: "); 
	scanf("%i", &x); // takes input from the user, you have to pass in the address of the variable you want to change. Scans an int form the user input, passes in the address.
	printf("x: %i\n", x);
}
*/

int	main(void)
{
	char *s;
	s = malloc(sizeof(*s));
	printf("string: "); 
	scanf("%s", s);
	printf("string: %s\n", s);
	free(s);
}

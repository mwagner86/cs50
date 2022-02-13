#include <cs50.h>	// for get_string
#include <stdio.h>	// for printf
#include <string.h>	// for strlen
#include <ctype.h>	// for toupper
#include <stdlib.h> // for malloc

int	main(void)
{
	int n;
	int i;

	char *s = get_string("s: ");

	char *t = malloc(strlen(s) + 1);
	if (t == NULL)
	{
		return 1;
	}
	strcpy(t, s);

	if (strlen(t) > 0)
	{
		t[0] = toupper(t[0]);
	}

	printf("%s\n", s);
	printf("%s\n", t);

	free(t);
}

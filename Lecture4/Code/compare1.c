#include <string.h>
#include <stdio.h>
#include <cs50.h>

int main(void)
{
	char *s = get_string("s: ");
	char *t = get_string("t: ");

	if (strcmp(s, t) == 0) // check if they are the same, 0 if same.
		printf("Same\n");
	else
		printf("Different\n");
}

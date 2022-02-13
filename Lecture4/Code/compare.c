# include <cs50.h>
# include <stdio.h>

/*int	main(void)
{
	int i = get_int("i: ");
	int j = get_int("j: ");

	if ( i == j)
		printf("Same\n");
	else
		printf("Different\n");
}
*/

int main(void)
{
	char *s = get_string("s: "); // s and t are pointers to memory locations where a string of characters starts
	char *t = get_string("t: ");

	if ( *s == *t) // if you don't use *, you will compare the addresses
		printf("Same\n");
	else
		printf("Different\n");
	printf("%p\n", s);
	printf("%p\n", t);
	printf("%s\n", s);
	printf("%s\n", t);
}

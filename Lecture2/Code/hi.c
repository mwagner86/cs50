#include <stdio.h>
#include <cs50.h>

int main(void)
{
	char c = '#';
	char c1 = 'H';
	char c2 = 'I';
	char c3 = '!';

	string s = "HI!";

	printf("%c\n", c);
	printf("%i\n", c);

	printf("%c%c%c\n", c1, c2, c3);
	printf("%i %i %i\n", c1, c2, c3);
	printf("%s\n", s);

	printf("%c%c%c\n", s[0], s[1], s[2]);
	printf("%i %i %i %i\n", s[0], s[1], s[2], s[3]);

	printf("%i %i %i %i %i\n", s[0], s[1], s[2], s[3], s[400]);
}

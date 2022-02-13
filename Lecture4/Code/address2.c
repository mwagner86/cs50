#include <stdio.h>

int main(void)
{
	char *s = "HI!";
	printf("%c\n", *s);
	printf("%c\n", *(s+1));
	printf("%c\n", *(s+2));
	printf("%i\n", *(s+3));
	printf("%c\n", *(s+100000)); // will create a segfault
}


// previously we've been using: 
// typedef char *string; for string

// this is the smae thing as s[1], s[2], s[3], etc.
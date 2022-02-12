#include <stdio.h>

int main(void)
{
	int n = 50;
	int *p = &n;
	printf("%i %i %i %p %p\n", n, *&n, *p, &n, p);
}

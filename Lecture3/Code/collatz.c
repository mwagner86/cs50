#include <stdio.h>
#include <cs50.h>

int collatz(int n);

int main(void)
{
	int n;
	n = get_int("Integer Number : ");
	int result;
	result = collatz(n);
	printf("The amount of steps is %i \n", result);
}


int collatz(int n)
{
	// base case, if n is equal to 1, we return 0, since there are zero steps to get back to one
	if (n == 1)
		return (0);
	// 2 recursive cases
	// even numbers, if we divide by 2 and there is no remainder, it is an even number
	else if ((n % 2) == 0)
		return (1 + collatz(n/2));
	// odd numbers, if it's not even it has to be odd :)
	else
		return (1 + collatz(3 * n + 1));
}

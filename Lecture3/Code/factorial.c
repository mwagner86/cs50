#include <stdio.h>
#include <cs50.h>

int factorial(int n);

int main(void)
{
	int n;
	n = get_int("Integer Number : ");
	int product;
	product = factorial(n);
	printf("yes this worked! %i \n", product);
}


int factorial(int n)
{
	int sum;
	sum = 0;

	if (n == 1)
		return (1);
	else
	{
		sum = n * factorial(n - 1);
	}
	return (sum);
}

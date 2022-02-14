#include <stdio.h>
#include <cs50.h>


/* iterative version of mario.c

void draw(int h);

int	main(void)
{
	int height = get_int("Height: ");
	draw(height);
}

void draw(int h)
{
	for (int i = 1; i <= h; i++)
	{
		for (int j = 1; j <=i; j++)
			printf("#");
		printf("\n");
	}
}

*/


// recursive version of mario.c

void draw(int h);

int	main(void)
{
	int height = get_int("Height: ");
	draw(height);
}

void draw(int h)
{
	if (h == 0) // basecase, if not implemtened segmentation fault.
		return;
	draw(h -1);
	for (int i = 0; i < h; i++)
		printf("#");
	printf("\n");
}

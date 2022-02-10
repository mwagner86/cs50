#include <stdio.h>
#include <cs50.h>

const int TOTAL = 3;

float average(int length, int array[]);

int main(void)
/*
{
	int score1 = 72;
	int score2 = 73;
	int score3 = 33;

	printf("Average: %f\n", (score1 + score2 + score3) / 3.0);
}

{
	int scores[3]; // total number of spaces
	scores[0] = 72; // specific space
	scores[1] = 73;
	scores[2] = 33;
}
*/ 
{
	int scores[TOTAL];
	for (int i = 0; i < TOTAL; i++)
	{
	scores[i] = get_int("Score: ");
	}
	printf("Average: %f\n", average(TOTAL, scores));
}

float average(int length, int array[])
{
	int sum = 0;
	for (int i = 0; i < length; i++)
	{
		sum += array[i];
	}
	return sum / (float) length;
}
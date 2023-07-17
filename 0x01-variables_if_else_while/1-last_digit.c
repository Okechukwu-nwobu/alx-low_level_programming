#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - The program will assign a random number to the variable n.
 * And it will outpout the last digit of n saying if it is greater
 * than 5, 0, or less than 6 but not 0.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	x = n % 10;

	printf("Last digit of %i is %d ", n, x);

	if (x > 5)
	{
		printf("and is greater than 5\n");
	}
	else if (x == 0)
	{
		printf("and is 0\n");
	}
	else
	{
		printf("and is less than 6 and not 0\n");
	}
	return (0);
}


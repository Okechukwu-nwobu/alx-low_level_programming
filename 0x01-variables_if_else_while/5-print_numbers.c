#include <stdio.h>

/**
 * main - This prints all single numbers from zero.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	n = 0;

	for (n = 0; n <= 9; n++)
	{
		printf("%d", n);
	}
	putchar('\n');

	return (0);
}

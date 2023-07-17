#include <stdio.h>

/**
 * main - This  program that prints all possible
 * combinations of single-digit numbers.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;

	a = 48;
	for (a = 48; a <= 57; a++)
	{
		putchar(a);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);
}

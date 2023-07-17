#include <stdio.h>

/**
 * main - This program prints all the numbers
 * of base 16 in lowercase, followed by a new line.
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	char n;

	n = '0';
	n = 'a';

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}
	for (n = 'a'; n < 'g'; n++)
	{
		putchar(n);
	}
	putchar('\n');

	return (0);
}

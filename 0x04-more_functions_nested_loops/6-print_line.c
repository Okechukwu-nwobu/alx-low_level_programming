#include "main.h"

/**
 * print_line - function draws a straight line in the terminal.
 * @n: Parameter
 *
 * Return: void
 */
void print_line(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int y;

		for (y = 1; y <= n; y++)
			_putchar('_');
		_putchar('\n');
	}
}

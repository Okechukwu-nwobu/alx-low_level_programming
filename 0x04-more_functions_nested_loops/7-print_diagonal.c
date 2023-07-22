#include "main.h"

/**
 * print_diagonal - This draws a diagonal line on the terminal.
 * @n: Number of times '\' is printed
 *
 * Return: void
 */
void print_diagonal(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int x, y;

		for (x = 0; x < n; x++)
		{
			for (y = 0; y < x; y++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
}

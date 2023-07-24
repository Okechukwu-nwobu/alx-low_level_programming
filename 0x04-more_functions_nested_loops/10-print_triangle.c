#include "main.h"

/**
 * print_triangle -  prints a triangle, followed by a new line.
 * @size: is the size of the triangle.
 *
 * Return: void
 */
void print_triangle(int size)
{
	if (size <= 0)
		_putchar('\n');
	else
	{
		int x, y;

		for (x = 0; x < size; x++)
		{
			int z;

			for (z = size - x; z >= 1; z--)
			{
				_putchar(' ');
			}
			for (y = 0; y <= x; y++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}

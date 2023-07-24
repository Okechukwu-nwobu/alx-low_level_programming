#include "main.h"

/**
 * swap_int - A function that swaps the value of two integer.
 * @a: Parameter to be swapped.
 * @b: Parameter to be swapped.
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}

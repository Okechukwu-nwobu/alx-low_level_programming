#include "main.h"
#include <stdio.h>

/**
 * reverse_array - Reverses the content of an array of integers.
 * @a: Pointer variable to the array.
 * @n: Number of elements of the array.
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;

	for (i = n - 1; i >= 0; i--)
	{
		if (i != n - 1)
		{
			printf(", ");
		}
		printf("%d", a[i]);
	}
	printf("\n");
}

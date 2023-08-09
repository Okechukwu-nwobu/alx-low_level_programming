#include "main.h"

/**
 * alloc_grid - function that returns a pointer to
 * a 2 dimensional array of integers.
 * @width: the width of the array.
 * @height: the height of the array.
 *
 * Return: pointer to integer
 */
int **alloc_grid(int width, int height)
{
	int n;
	int y;
	int **mem;

	if (width <= 0 || height <= 0)
		return (NULL);
	mem = malloc(sizeof(int *) * height);

	if (mem == NULL)
		return (NULL);
	for (n = 0; n < height; n++)
	{
		mem[n] = malloc(sizeof(int) * width);
		if (mem[n] == NULL)
		{
			free(mem);
			for (y = 0; y <= height; y++)
				free(mem[y]);
			return (NULL);
		}
		for (y = 0; y < width; y++)
			mem[n][y] = 0;
	}
	return (mem);
}

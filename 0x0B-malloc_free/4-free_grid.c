#include "main.h"

int **alloc_grid(int width, int height);

/**
 * free_grid - function that frees a 2 dimensional grid
 * previously created by your alloc_grid function.
 * @grid: pointer to integer pointer.
 * @height: grid height
 *
 * Return: Void
 */
void free_grid(int **grid, int height)
{
	int mem;

	mem = malloc(sizeof(int *) * height);
	free(mem);
}

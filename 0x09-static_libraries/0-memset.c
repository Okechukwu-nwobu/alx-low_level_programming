#include "main.h"

/**
 * _memset - This  function that fills memory with a constant byte.
 * @s: pointer variable.
 * @b: constant byte
 * @n: number of times b is filled.
 *
 * Return: A pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}
	return (s);
}

#include "main.h"

/**
 * _memcpy - This function copies memory area.
 * @dest: destination memory are.
 * @src: source memory area.
 * @n: number of bytes to be copied.
 *
 * Return: A pointr to destination memory area.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		dest[x] = src[x];
	}
	return (dest);
}

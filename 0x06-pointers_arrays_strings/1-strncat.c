#include "main.h"

/**
 * _strncat -  Concatenates two strings.
 * @dest: Destination string.
 * @src: Source string.
 * @n: Number of bytes used.
 *
 * Return: Destination string.
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;
	int i;

	for (i = 0; dest[i] != '\0'; i++)
		dest_len++;
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';
	return (dest);
}

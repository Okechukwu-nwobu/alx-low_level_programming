#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @src: Source string.
 * @dest: Destination string.
 *
 * Return: A pointer to the destination string.
 */
char *_strcat(char *dest, char *src)
{
	int dest_len = 0;
	int src_len = 0;
	int n;

	for (n = 0; dest[n] != '\0'; n++)
		dest_len++;
	for (n = 0; src[n] != '\0'; n++)
		src_len++;
	for (n = 0; n <= src_len; n++)
		dest[dest_len + n] = src[n];
	return (dest);
}

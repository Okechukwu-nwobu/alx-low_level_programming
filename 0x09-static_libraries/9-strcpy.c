#include "main.h"

/**
 * _strcpy - Afunction that copies the string pointed
 * to by src, including the terminating null byte (\0),
 * to the buffer pointed to by dest.
 * @dest: Destination of char
 *@src: Source of str to be copied.
 *
 * Return: returns the copied char
 */
char *_strcpy(char *dest, char *src)
{
	int x;

	for  (x = 0; src[x] != '\0'; x++)
		dest[x] = src[x];
	dest[x] = '\0';
	return (dest);
}

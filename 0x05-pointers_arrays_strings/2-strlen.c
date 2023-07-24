#include "main.h"

/**
 * _strlen - The function that returns the length of a string.
 *@s: The string to be checked.
 *
 * Return: length of str
 */
int _strlen(char *s)
{
	int x;
	int len;

	len = 0;
	for (x = 0; s[x] != '\0'; x++)
		len++;
	return (len);
}

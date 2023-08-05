#include "main.h"

/**
 * _strpbrk - function searches a string for any of a set of bytes.
 * @s: string to be searched.
 * @accept: string to search for
 *
 * Return: A  pointer to the byte in s that matches one of the
 * bytes in accept, or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int n;

	while (*s)
	{
		for (n = 0; accept[n]; n++)
		{
			if (*s == accept[n])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}

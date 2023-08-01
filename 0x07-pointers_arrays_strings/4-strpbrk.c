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
	int n, y;

	for (n = 0; s[n] != '\0'; n++)
	{
		for (y = 0; s[n] == accept[y]; y++)
		{
			if (accept[y] != '\0')
			{
				return (s);
			}
		}
	}
	if (*s != *accept)
	{
		return (NULL);
	}
}

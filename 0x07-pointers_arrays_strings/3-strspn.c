#include "main.h"

/**
 * _strspn - A function that gets the length of a prefix substring.
 * @s: string to be checked.
 * @accept: string to check for.
 *
 * Return: unsigned integer.
 */
unsigned int _strspn(char *s, char *accept)
{
	int x;
	int y;

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; s[x] != accept[y]; y++)
		{
			if (accept[y] == '\0')
			{
				return (x);
			}
		}
	}
	return (0);
}

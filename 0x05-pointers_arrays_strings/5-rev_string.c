#include "main.h"

/**
 * rev_string - A function that reverses a string.
 * @s: Parameter to be reversed.
 *
 * Return: void
 */
void rev_string(char *s)
{
	int x;
	int len;

	len = 0;
	for (x = 0; s[x] != '\0'; x++)
		len++;
	for (x = 0; x < len / 2; x++)
	{
		char y;

		y = s[x];
		s[x] = s[len - 1 - x];
		s[len - 1 - x] = y;
	}
}

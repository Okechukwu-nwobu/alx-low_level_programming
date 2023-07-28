#include "main.h"
#include <stdio.h>

/**
 * string_toupper - The function that changes all
 * lowercase letters of a string to uppercase.
 * @s: Pointer variable.
 *
 * Return: character.
 */
char *string_toupper(char *s)
{
	int i, j;
	char *a = "abcdefghijklmnopqrstuvwxyz";
	char *b = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; a[j] != '\0'; j++)
		{
			if (s[i] == a[j])
			{
				s[i] = b[j];
				break;
			}
		}
	}
	return (s);
}

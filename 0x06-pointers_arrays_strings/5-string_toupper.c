#include "main.h"
#include <stdio.h>

/**
 * string_toupper - The function that changes all
 * lowercase letters of a string to uppercase.
 * 
 *
 *
 *
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str = str[i] - 32;
		}
	}
	printf("%s\n", str);
}

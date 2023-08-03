#include "main.h"

/**
 * _strlen_recursion - This returns the length of a string.
 * @s: Pointer variable
 *
 * Return: integer
 */
int _strlen_recursion(char *s)
{
	int len;

	len = 0;
	if (*s != '\0')
	{
		len++;
		len = len + _strlen_recursion(s + 1);
	}
	return (len);
}

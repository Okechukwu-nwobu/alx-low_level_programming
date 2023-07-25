#include "main.h"

/**
 * print_rev - The  function that prints a string,
 * in reverse, followed by a new line.
 *@s: Parameter to be printed.
 *
 * Return: void
 */
void print_rev(char *s)
{
	int x;
	int len;

	len = 0;
	for (x = 0; s[x] != '\0'; x++)
		len++;
	for (x = len - 1; x >= 0; x--)
		_putchar(s[x]);
	_putchar('\n');
}

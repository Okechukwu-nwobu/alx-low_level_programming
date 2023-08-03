#include "main.h"

/**
 * _puts_recursion - This prints a string, followed by a new line.
 * @s: Pointer variable
 *
 * return: void
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}

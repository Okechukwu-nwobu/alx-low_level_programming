#include "main.h"

/**
 * puts_half - A function that prints half of a
 * string, followed by a new line.
 * @str: Parameter.
 *
 * Return: void
 */
void puts_half(char *str)
{
	int x;
	int y;
	int len;

	len = 0;
	for (x = 0; str[x] != '\0'; x++)
		len++;

	y = (len - 1) / 2;
	for (x = y + 1; str[x] != '\0'; x++)
		_putchar(str[x]);
	_putchar('\n');
}

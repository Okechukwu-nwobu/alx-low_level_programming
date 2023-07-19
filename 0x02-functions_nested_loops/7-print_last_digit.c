#include "main.h"

/**
 * print_last_digit - This prints the last digit of a number.
 * @n: The parameter to be tested.
 *
 *Return: Always the last digit.
 */
int print_last_digit(int n)
{
	int y = n % 10;

	if (n < 0)
		y = -y;
	_putchar(y + '0');
	return (y);
}

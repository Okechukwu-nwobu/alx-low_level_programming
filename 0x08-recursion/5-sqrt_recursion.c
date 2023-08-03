#include "main.h"

/**
 * _sqrt_recursion - function returns the natural square root of a number.
 * @n: number whose square root is returned.
 *
 * Return: integer.
 */
int _sqrt_recursion(int n)
{
	int y;

	for (y = 1; y < n; y++)
	{
		if (n == (y^2))
		{
			return (y);
		}
		else if (n != (y^2))
		{
			return (-1);
		}
	}
}

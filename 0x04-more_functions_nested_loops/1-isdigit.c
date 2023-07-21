#include "main.h"

/**
 * _isdigit - This  checks for a digit (0 through 9).
 * @c: The parameter to be checked.
 *
 * Return: Returns 1 if true, otherwise 0.
 */
int _isdigit(int c)
{
	c = 0;
	if (c <= 9)
	{
		return (1);
	}
	else
		return (0);
}

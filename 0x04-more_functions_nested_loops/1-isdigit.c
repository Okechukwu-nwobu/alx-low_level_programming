#include "main.h"

/**
 * _isdigit - This  checks for a digit (0 through 9).
 * @c: The parameter to be checked.
 *
 * Return: Returns 1 if true, otherwise 0.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
		return (0);
}

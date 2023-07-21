#include "main.h"

/**
 * _isupper - This function checks for uppercase character.
 * @c: The parameter to be checked.
 *
 * Return: return 1 if uppercase, 0 if not.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}

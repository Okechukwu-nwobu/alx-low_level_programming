#include "main.h"

/**
 * create_array - function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: parameter.
 * @c: parameter
 *
 * Return: Character.
 */
char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int n;

	if (size == 0)
	{
		return (NULL);
	}
	ar = malloc(sizeof(char) * size);

	if (ar == NULL)
	{
		return (NULL);
	}
	for (n = 0; n < size; n++)
	{
		ar[n] = c;
	}
	return (ar);
}

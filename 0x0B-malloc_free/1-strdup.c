#include "main.h"

/**
 * _strdup -  function that returns a pointer to a newly
 * allocated space in memory, which contains a copy of the
 * string given as a parameter.
 * @str: string
 *
 * Return: pointer to character
 */
char *_strdup(char *str)
{
	int n;
	int x = 0;
	char *cpy;

	if (str == NULL)
	{
		return (NULL);
	}
	for (n = 0; str[n] != '\0'; n++)
	{
		x++;
	}
	cpy = malloc(sizeof(char) * (x + 1));

	if (cpy == NULL)
	{
		return (NULL);
	}
	for (n = 0; str[n] != '\0'; n++)
	{
		cpy[n] = str[n];
	}
	return (cpy);
}

#include "main.h"

/**
 * _strstr - function locates a substring.
 * @haystack: string to be checked.
 * @needle: string to check for.
 *
 * Return: A pointer to the beginning of the located
 * substring, or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		if (*haystack == *needle)
		{
			return (haystack);
		}
	}
	if (*haystack == *needle)
	{
		return (haystack);
	}
	else
	{
		return (NULL);
	}
}

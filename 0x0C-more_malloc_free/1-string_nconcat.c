#include "main.h"

/**
 * string_nconcat - function that concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * @n: length of s2 to be concatinated.
 *
 * Return: A pointer to character string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0;
	unsigned int len2 = 0;
	char *str;
	unsigned int i;

	if (s1 == 0)
	{
		return ("");
	}
	if (s2 == 0)
	{
		return ("");
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		len1++;
	}
	for (i = 0; s2[i] != '\0'; i++)
	{
		len2++;
	}
	str = malloc(sizeof(char) * (len1 + n) + 1);
	if (str == NULL)
	{
		return (NULL);
	}
	if (n < len2)
	{
		for (i = 0; s1[i] != '\0'; i++)
		{
			str[i] = s1[i];
		}
		for (i = 0; i < n; i++)
		{
			str[len1 + i] = s2[i];
		}
		str[len1 + i] = '\0';
	}
	else if (n >= len2)
	{
		for (i = 0; s1[i] != '\0'; i++)
		{
			str[i] = s1[i];
		}
		for (i = 0; s2[i] != '\0'; i++)
		{
			str[len1 + i] = s2[i];
		}
		str[len1 + i] = '\0';
	}
	return (str);
}

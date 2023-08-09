#include "main.h"

/**
 * str_concat - The function that concatenates two strings.
 * @s1: string one
 * @s2: stringtwo
 *
 * Return: pointer to character
 */
char *str_concat(char *s1, char *s2)
{
	char *mem;
	int n;
	int len1 = 0;
	int len2 = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (n = 0; s1[n] != '\0'; n++)
		len1++;
	for (n = 0; s2[n] != '\0'; n++)
		len2++;
	mem = malloc(sizeof(char) * (len1 + len2) + 1);

	if (mem == NULL)
		return (NULL);
	for (n = 0; s1[n] != '\0'; n++)
		mem[n] = s1[n];
	for (n = 0; s2[n] != '\0'; n++)
		mem[len1 + n] = s2[n];
	return (mem);
}

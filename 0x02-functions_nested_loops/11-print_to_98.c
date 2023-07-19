#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - This  prints all natural
 * numbers from n to 98, followed by a new line.
 * @n: This is the parameter.
 *
 * Return:
 */
void print_to_98(int n)
{
	int x;

	if (n >= 0 && n <= 98)
	{
		for (x = n; x <= 98; x++)
		{
			printf("%d", x);
			if (x != 98)
				printf(", ");
		}
		printf("\n");
	}
	else if (n < 0)
	{
		for (x = n; x <= 98; x++)
		{
			printf("%d", x);
			if (x != 98)
				printf(", ");
		}
		printf("\n");
	}
	else if (n > 98)
	{
		for (x = n; x >= 98; x++)
		{
			printf("%d", x);
			if (x != 98)
				printf(", ");
		}
		printf("\n");
	}
	else
		printf("%d\n", n);
}

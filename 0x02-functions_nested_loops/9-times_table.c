#include "main.h"
#include <stdio.h>

/**
 * times_table - This  prints the 9 times table, starting with 0.
 *
 *Returns: Always void.
 */
void times_table(void)
{
	int t;
	int n;
	int x;

	for (t = 0; t < 10; t++)
	{
		for (n = 0; n < 10; n++)
		{
			x = t * n;
			if (n == 0)
			{
				printf("%d, ", x);
			}
			else
			{
				printf("%2d", x);
				if (n != 9)
				{
					printf(", ");
				}
			}
		}
		printf("\n");
	}
}

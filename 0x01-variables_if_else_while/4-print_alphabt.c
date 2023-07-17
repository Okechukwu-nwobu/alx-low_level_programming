#include <stdio.h>

/**
 * main - This prints the alphabets in lower cases,
 * ommiting q and e.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alph;

	alph = 'a';

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		if (alph != 'e' && alph != 'q')
		{
			putchar(alph);
		}
	}
	putchar('\n');

	return (0);
}

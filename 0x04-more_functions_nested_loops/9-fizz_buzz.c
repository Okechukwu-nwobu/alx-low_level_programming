#include <stdio.h>

/**
 * main - A program that prints the numbers from 1 to 100
 * followed by a new line.
 *
 * Description: For multiples of 3, Fizz is printed. for
 * multiples of 5, Buzz is printed. For multiples of both
 * 3 and 5, FizzBuzz is printed.
 *
 * Return: 0
 */
int main(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
		if (x % 3 == 0 && x % 5 == 0)
		{
			printf("%s", "FizzBuzz");
		}
		else if (x % 5 == 0)
		{
			printf("%s", "Buzz");
		}
		else if (x % 3 == 0)
		{
			printf("%s", "Fizz");
		}
		else
			printf("%d", x);
		if (x != 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}


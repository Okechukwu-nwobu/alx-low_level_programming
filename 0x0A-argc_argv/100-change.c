#include <stdio.h>
#include <stdlib.h>

/**
 * main - program prints the minimum number of
 * coins to make change for an amount of money.
 * @argc: Argument count.
 * @argv: Argument vector.
 *
 * Return: Integer
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int cents, sum, x, y, z, p;

		cents = atoi(argv[1]), sum = 0, y = ((cents % 25) % 10 % 5) % 2;
		x = ((cents % 25) % 10 % 5) / 2, z = ((cents % 25) % 10) % 5;
		p = ((cents % 10) % 5) % 2;
		if (cents >= 25)
		{
			sum = sum + (cents / 25) + (cents % 25);
			if ((cents % 25) >= 10)
				sum = (cents / 25) + ((cents % 25) / 10 + (cents % 25) % 10);
			if (((cents % 25) % 10) >= 5)
				sum = (cents / 25) + ((cents % 25) / 10) + ((cents % 25) % 10) / 5 + z;
			if (((cents % 25) % 10) % 5 >= 2)
				sum = (cents / 25) + (cents % 25) / 10 + ((cents % 25) % 10) / 5 + x + y;
			printf("%d\n", sum);
		}
		else if (cents >= 10)
		{
			sum += (cents / 10) + (cents % 10);
			if ((cents % 10) >= 5)
				sum = (cents / 10) + ((cents % 10) / 5) + (cents % 10) % 5;
			if (((cents % 10) % 5) >= 2)
				sum = (cents / 10) + ((cents % 10) / 5) + (((cents % 10) % 5) / 2) + p;
			printf("%d\n", sum);
		}
		else if (cents >= 5)
		{
			sum = sum + (cents / 5) + (cents % 5);
			if ((cents % 5) >= 2)
				sum += (cents / 5) + ((cents % 5) / 2) + ((cents % 5) % 2);
			printf("%d\n", sum);
		}
		else if (cents >= 2)
			sum = sum + (cents / 2) + (cents % 2), printf("%d\n", sum);
		else
			sum = (sum + cents), printf("%d\n", sum);
	}
	return (0);
}

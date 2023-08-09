#include <stdio.h>
#include <stdlib.h>

/**
 * main -  program that adds positive numbers.
 * @argc: Argument count.
 * @argv: Argument vector
 *
 * Return: Integer
 */
int main(int argc, char *argv[])
{
	int n;
	int sum = 0;
	if (argc == 1)
		printf("%d\n", 0);
	else if (argc > 1)
	{
		for (n = 1; n < argc; n++)
		{		
			if (argv = (isdigit))
			{
				sum = sum + atoi(argv[n]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
	
}

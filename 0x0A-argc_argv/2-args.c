#include <stdio.h>

/**
 * main - program prints all arguments it receives.
 * @argc: Argument count.
 * @argv: Argument vector.
 *
 * Return: integer.
 */
int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}
	return (0);
}

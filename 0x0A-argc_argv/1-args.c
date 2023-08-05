#include <stdio.h>

/**
 * main - program prints the number of arguments passed into it.
 * @argc: Argument count.
 * @argv: Argument vector.
 *
 * Return: integer.
 */
int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}

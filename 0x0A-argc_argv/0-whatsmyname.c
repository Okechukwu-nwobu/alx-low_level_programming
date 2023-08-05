#include <stdio.h>

/**
 * main - program prints its name, followed by a new line.
 * @argc: Argument count.
 * @argv: Argument vector.
 *
 * Return: An integer
 */
int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", argv[0]);
	return (0);
}

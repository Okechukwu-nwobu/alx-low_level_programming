#include <stdio.h>

/**
 * main - This is the entry point.
 * printf: This displays the output on execution.
 * sizeof: This evaluates the sizes of different variables.
 *
 *Description: The program evaluates and prints various sizes.
 *Return: Always 0 (Success)
 */
int main(void)
{
	char charType;
	int intType;
	long int longType;
	long long int longlongType;
	float floatType;

	printf("Size of char: %zu byte(s)\n", sizeof(charType));
	printf("Size of int: %zu byte(s)\n", sizeof(intType));
	printf("Size of long int: %zu byte(s)\n", sizeof(longType));
	printf("Size of long long int: %zu byte(s)\n", sizeof(longlongType));
	printf("Size of float: %zu byte(s)\n", sizeof(floatType));
	return (0);
}

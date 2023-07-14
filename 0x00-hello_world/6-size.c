#include <stdio.h>

/* A C program that prints the size of various types on the computer it is compiled and run on. */
int main()
{
	printf("Size of int: %zu byetes\n", sizeof(int));
	printf("Size of char: %zu bytes\n", sizeof(char));
	printf("Size of float: %zu bytes\n", sizeof(float));
	printf("Size of double: %zu bytes\n", sizeof(double));
	printf("Size of long: %zu bytes\n", sizeof(long));

	return(0);
}

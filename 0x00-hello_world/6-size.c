#include <stdio.h>

/* main - This is the entry point of the program. */
/**
 * printf: This prints the output.
 * @a: This is the unsigned int.
 * @i: This is the unsigned long int.
 * @d: This represents the unsigned double.
 * @c: This represents the unsigned char.
 * @j: This represent the unsigned float.
 * 
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	int i;
	int d;
	char c;
	float j;
	printf("The size of an int is: %u.\n", (unsigned)sizeof(a));
	printf("The size of a long int is: %lu.\n", (unsigned long)sizeof(i));
	printf("The size of a double is: %lu.\n", (long unsigned)sizeof(d));
	printf("The size of a char is: %u.\n", (unsigned char)sizeof(c));
	printf("The size of a float is: %u.\n", (unsigned)sizeof(j));
	return (0);
}
	

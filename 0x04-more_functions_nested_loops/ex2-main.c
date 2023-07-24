#include <stdio.h>

/**
 * modif_my_char_var - modifies a char variable using the 
 * char and its pointer'
 * @*cc: the pointer
 * @ccc: the char
 *
 * Return: 0.
 */
void modif_my_char_var(char *cc, char ccc)
{
	*cc = 'o';
	ccc = 'i';
}

/**
 * main - how to change the value of a char variable from outside the function
 * it is declared in, using a pointer.
 *
 * Return: Always 0.
 */
int main(void)
{
	char c;
	char *p;

	p = &c;
	c = 'H';
	printf("Value of 'c' before the call: %d\n", c);
	printf("Address of 'c': %p\n", &c);
	printf("value of 'p': %p\n", p);
	printf("Address of 'p': %p\n", &p);
	modif_my_char_var(p, c);
	printf("Value of 'c' after the call: %d\n", c);
	return (0);
}

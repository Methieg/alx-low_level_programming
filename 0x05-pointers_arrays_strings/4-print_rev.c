#include "main.h"

/**
 * print_rev - prints in reverse a string.
 *@s: the string to print in reverse.
 */
void print_rev(char *s)
{
	int i;
	int length;

	i = 0;
	length = 0;
	while (s[length] != '\0')
	{
		length++;
	}
	i = length - 1;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}



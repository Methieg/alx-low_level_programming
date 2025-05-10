#include "main.h"

/**
 * print_rev - prints in reverse a string.
 *@s: the string to print in reverse.
 */
void print_rev(char *s)
{
	int length;

	length = 0;
	while (s[length] != '\0')
	{
		length++;
	}
	length -= 1;
	while (length >= 0)
	{
		_putchar(s[length]);
		length--;
	}
	_putchar('\n');
}



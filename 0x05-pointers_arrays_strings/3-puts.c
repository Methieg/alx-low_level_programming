#include "main.h"

/**
 * _puts - Prints a string of interest
 *
 * @str: is for the string to be printed
 * Return:(void)
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}



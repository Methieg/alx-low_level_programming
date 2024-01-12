#include "main.h"
/**
 * _puts_recursion - will print string followed by newline.returns void.
 * @s: The string to be printed by function
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_puts_recursion('\n');
	}
	else
	{
		_puts_recursion(s+1);
	}
}


#include "main.h"

/**
 * rev_string - prints a string in reverse
 * @s: the used string to be reversed
 * Return: 0
 */
void rev_string(char *s)
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


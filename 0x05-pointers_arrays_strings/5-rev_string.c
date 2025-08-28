#include "main.h"

/**
 * rev_string - prints a string in reverse
 * @s: the used string to be reversed
 * Return: 0
 */
void rev_string(char *s)
{
	char *start = s;
	char *end = s;
	char temp;

	while (end != '\0')
	{
		end++;
	}
	end--;
	while (start < end)
	{
		temp = *start;
		*start = *end;
		*end = temp;

		start++;
		end--;
	}
	_putchar('\n');
}


#include "main.h"

/**
 * rev_string - prints a string in reverse
 * @s: the used string to be reversed
 * Return: 0
 */
void rev_string(char *s)
{
	int length;
	int start;
	int end;
	int temp;

	start = 0;

	length = 0;
	while (s[length] != '\0')
	{
		length++;
	}
	end = length - 1;
	length--;
	while (start < end)
	{
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;

		start++;
		end--;
	}
	_putchar('\n');
}


#include <stdio.h>

/**
 * main - lowercase alphabet reverse
 *
 * Return: (0) - Success
 */
int main(void)
{
	char letter;

	letter = 'z';

	while (letter >= 'a')
	{
		putchar(letter);
		letter--;
	}
	putchar('\n');

	return (0);
}

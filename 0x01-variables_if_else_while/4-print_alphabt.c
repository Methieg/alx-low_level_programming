#include <stdio.h>

/**
 * main - prints alphabet excluding 2 letters
 *
 * Return: (0) -Success
 */
int main(void)
{
	char letter;

	letter = 'a';

	while (letter <= 'z')
	{
		if (letter != 'q' && letter != 'e')
		{
			putchar(letter);
		}
		letter++;
	}
	putchar('\n');

	return (0);
}

#include <stdio.h>
/**
 * main - prints alphabet in lowercase using putchar
 *
 * Return: (0) - Success
 */
int main(void)
{
	char letter;

	letter = 'a';
	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}

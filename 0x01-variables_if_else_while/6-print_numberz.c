#include <stdio.h>

/**
 * main - prints single base 10 digits using putchar
 * no use of char variables
 *
 * Return: (0) - Success
 */
int main(void)
{
	int i;

	i = '0';

	while (i <= '9')
	{
		putchar(i);
		i++;
	}
	putchar('\n');

	return (0);
}

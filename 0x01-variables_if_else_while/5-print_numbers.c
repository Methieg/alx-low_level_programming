#include <stdio.h>

/**
 * main - prints all single digit numbers from 0 of base 10
 *
 * Return: (0) - Success
 */
int main(void)
{
	int i;

	i = 0;
	while (i <= 9)
	{
		printf("%d", i);
		i++;
	}
	putchar('\n');
	return (0);
}

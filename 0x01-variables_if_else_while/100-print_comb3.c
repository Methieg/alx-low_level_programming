#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all possible different combinations of
 * single digits
 *
 * Return: (0) -Success
 */
int main(void)
{
	int i, j;

	i = 0;
	while (i <= 8)
	{
		j = i + 1;
		while (j <= 9)
		{
			putchar(i + '0');
			putchar(j + '0');
			if ((i != 0 && j != 1) || j != 9)
			{
				putchar(',');
				putchar(' ');
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}

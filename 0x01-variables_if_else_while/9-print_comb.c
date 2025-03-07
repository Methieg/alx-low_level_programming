#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all combinations of single digits
 * printing is done in ascending order using putchar four times only
 *
 * Return: (0) - Success
 */
int main(void)
{
	int i;

	i = 0;

	while (i <= 9)
	{
		putchar('0' + i);

		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	putchar('\n');

	return (0);
}

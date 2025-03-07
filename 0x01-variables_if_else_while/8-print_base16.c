#include <stdio.h>

/**
 * main - prints all numbers of base 16 in lowercase
 * followed by newline
 *
 * Return: (0) - Success
 */
int main(void)
{
	int i;
	char hexnumber;


	i = 0;

	while (i < 16)
	{
		if (i < 10)
		{
			hexnumber = i + '0';
		}
		else
		{
			hexnumber = (i - 10) + 'a';
		}
		putchar(hexnumber);
		i++;
	}
	putchar('\n');
	return (0);
}

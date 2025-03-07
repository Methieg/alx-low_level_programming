#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -random number assignment,
 * assesses last digit of number as well
 *
 * Return: (0) - Success
*/
int main(void)
{
	int n, lastdigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastdigit = n % 10;

	if (lastdigit < 6)
	{
		printf("Last digit of %d is %d and is less than 6\n", n, lastdigit);
	}
	else if (lastdigit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastdigit);
	}
	else if (lastdigit < 6 && lastdigit != 0)
	{
			printf("Last digit of %d is %d and is less than 6 and not 0", n, lastdigit);
	}
	return (0);
}

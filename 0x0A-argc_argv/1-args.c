#include <stdio.h>

/**
 * main - prints number of command line arguments
 * @argc: denotes a representation of an argument count
 * @argv: denotes a representation of array aka argument vector
 * Return: 0 - Success
 */
int main(int argc, char *argv[])
{
	int i;


	if (argc == 1)
	{
		printf("number of argument(s) passed in : %d\n", argc - 1);
	}
	else
	{
			for (i = 0; *argv; argv++)
			{
				;
			printf("number of argument(s): %d\n", i - 1);
			}
	}
	return (0);
}

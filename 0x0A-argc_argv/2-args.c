#include <stdio.h>

/**
 * main - program to print all arguments received
 * @argc: argument count
 * @argv: holds an array of arguments
 * Return: (0) - Success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i <= argc; i++)
	{
		printf(" %s\n", argv[i]);
	}
	return (0);
}

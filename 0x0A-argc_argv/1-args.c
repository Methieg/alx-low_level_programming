#include <stdio.h>

/**
 * main - prints number of command line arguments
 * @argc: denotes a representation of an argument count
 * @argv: denotes a representation of array aka argument vector
 * Return: 0 - Success
 */
int main(int argc, char *argv[])
{
	printf("The number of arguments passed into main are: %d\n", argc - 1);
	return (0);
}

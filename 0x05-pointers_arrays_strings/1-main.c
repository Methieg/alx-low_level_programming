#include "main.h"
#include <stdio.h>

/**
 * main - Entry point of program
 * Dwscription: swap program
 *
 * Return: (0) - Success
 */
int main(void)
{
	int a;
	int b;

	a = 98;
	b = 42;
	printf("a=%d, b=%d\n", a, b);
	swap_int(&a, &b);
	printf("a=%d, b=%d\n", a, b);
	return (0);
}

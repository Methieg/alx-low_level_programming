#include "stdio.h"

/**
 * swap_int - function should be able to swap integers
 * @a: value one
 * @b: value two
 * Description: swaps the values of two integers
 * Return: Always (0);
 */
void swap_int(int *a, int *b)
{
int tmp;
tmp = *a;
*a = *b;
*b = tmp;
}

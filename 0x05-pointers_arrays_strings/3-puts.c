#include "main.h"

/**
 * _puts - Prints a string of inteest
 *
 * @str: is for the string to be printed
 * Return: 0
 */
void _puts(char *str)
{
for (; *str != '\0'; str++)
{
_putchar(*str);
}
_putchar('\n');
}

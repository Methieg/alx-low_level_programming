#include "main.h"

/**
 * _puts - prints a string and a new line
 * @str: directs pointer to a string for print
 * Return: void
 */
void _puts(char *str)
{
int i = 0;
while (str[i])
{
_putchar(str[i]);
i++;
}
_putchar('\n');
}

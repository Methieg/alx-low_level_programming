#include "main.h"

/**
 *_puts - prints a string
 *
 * @str: string to print
 * Description: prints a string and then a new line to stdout
 * return :void
 */
void _puts(char *str)
{
while (*str)
_putchar(*str++);
_putchar('\n');
}

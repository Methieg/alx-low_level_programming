#include "stdio.h"

/**
 * _strlen -when used in the function should give out the length of a string
 * @s: input char
 * Return: length of a string
 */
int _strlen(char *s)
{
int l = 0;
while (*s != '\0')
{
s++;
l++;
}
return (l);
}

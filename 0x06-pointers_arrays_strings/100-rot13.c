#include "main.h"

/**
 * rot13 - Encodes a string using ROT13 cipher.
 * @s: The string to encode.
 *
 * Return: Pointer to the resulting string.
 */
char *rot13(char *s)
{
    int i, j;
    char *from = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    char *to = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

    i = 0;
    while (s[i] != '\0')
    {
        j = 0;
        while (from[j] != '\0')
        {
            if (s[i] == from[j])
            {
                s[i] = to[j];
                break;
            }
            j++;
        }
        i++;
    }

    return (s);
}

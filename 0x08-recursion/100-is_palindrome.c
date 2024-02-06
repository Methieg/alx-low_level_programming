#include "main.h"  /* All prototypes declared in main.h */

/**
 * Checks if a string is a palindrome, ignoring non-alphanumeric chars.
 *
 * @param s: The string to check.
 * @return: (1) if palindrome, (0) otherwise.
 */
int is_palindrome(char *s)
{
char *endPointer = s;

    /* Find end of string, skipping non-alphanumeric chars */
while (*endPointer) 
{
	if (*endPointer >= 'a' && *endPointer <= 'z' ||
            *endPointer >= 'A' && *endPointer <= 'Z' ||
            *endPointer >= '0' && *endPointer <= '9') {
            break;  /* Found an alphanumeric character */
        }
        endPointer++;
    }
    endPointer--;

    /* Iterate inward, comparing characters (case-insensitively) */
    while (s < endPointer)
{
        /* Skip non-alphanumeric chars from beginning */
        while (*s && !(*s >= 'a' && *s <= 'z' ||
                        *s >= 'A' && *s <= 'Z' ||
                        *s >= '0' && *s <= '9')) {
            s++;
        }

        /* Skip non-alphanumeric chars from end */
        while (*endPointer && !(*endPointer >= 'a' && *endPointer <= 'z' ||
                                 *endPointer >= 'A' && *endPointer <= 'Z' ||
                                 *endPointer >= '0' && *endPointer <= '9')) {
            endPointer--;
        }

        /* Compare characters and return 0 if not equal */
	if (tolower(*s++) != tolower(*endPointer--)) 
	{
		return (0);
	}
}

return (1);  /* Palindrome found */
}


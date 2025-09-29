#include "main.h"
/**
 * _islower - Entry point
 * Description: checks is a character is lowercase
 * @c: the integer value it receives
* Return: 1 if true. 0 if false.
*/

int _islower(int c)
{
	int i;

	i = 'a';
	while (i <= 'z')
	{
		if (c == i)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

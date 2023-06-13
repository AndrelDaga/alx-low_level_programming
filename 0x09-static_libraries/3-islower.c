#include "main.h"
#include "ctype.h"

/**
 * _islower - checks if a character is lowercase
 * @c: takes this as the input character to check for
 * Return: 1 if the character is lower case and 0 if  otherwise
 */
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

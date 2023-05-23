#include "main.h"
#include "ctype.h"

/**
 * _isalpha - checks for alphabetic characters
 *
 * @c: character to check
 *
 * Return: 1 if c is a letter, and 0 if otherwise
 */
int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

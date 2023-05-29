#include "main.h"
#include <string.h>

/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: the string
 * Return: nothing
 */
void puts_half(char *str)
{
	int length;

	int i;

	int n;

	length = strlen(str);

	n = (length - 1) / 2;
	if (length / 2 != 0)
	{
		for (i = length - n; i < length; i++)
		{
			_putchar(str[i]);
		}
		_putchar('\n');
	}
	else
	{
		for (i = (length / 2) - 1; i < length; i++)
		{
			_putchar(str[i]);
		}
		_putchar('\n');
	}

}

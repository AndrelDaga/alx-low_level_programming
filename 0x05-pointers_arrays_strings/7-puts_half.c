#include "main.h"
#include <string.h>

/**
 * puts_half - prints half of a string
 * @str: string to be manipulated
 * Return: nothing
 */

void puts_half(char *str)
{
	int t;

	int f;

	int l;

	int i;

	l = strlen(str);
	t = l / 2;
	f = (l - 1) / 2;
	if (l % 2 != 0)
	{
		for (i = f; i <= l-1; i++)
		{
			_putchar(str[i]);
		}
		_putchar('\n');
	}
	else
	{
		for (i = t; i <= l-1; i++)
		{
			_putchar(str[i]);
		}
		_putchar('\n');
	}
}

#include "main.h"
#include <string.h>

/**
 * puts2 - prints every other character
 * @str: the string
 * Return: nothing
 */
void puts2(char *str)
{
	int l;

	int x;

	l = strlen(str) - 1;

	x = 0;
	while (x <= l)
	{
		_putchar(str[x]);
		x += 2;
	}
	_putchar('\n');
}

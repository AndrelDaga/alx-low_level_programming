#include "main.h"
#include <string.h>

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: the string
 * Return: nothing
 */
void print_rev(char *s)
{
	int x;

	x = strlen(s);
	while (x > -1)
	{
		_putchar(s[x]);
		x--;
	}
	_putchar('\n');
}

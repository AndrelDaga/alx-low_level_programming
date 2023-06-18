#include "main.h"
#include <string.h>

/**
 * _print_rev_recursion - prints a string in reverse.
 * @s: the string
 * Return: nothing
 */
void _print_rev_recursion(char *s)
{
	int size;

	size = strlen(s) - 1;
	while (size >= 0)
	{
		_putchar(s[size]);
		size--;
	}
}

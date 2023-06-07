#include "main.h"
#include <string.h>

/**
 * _print_rev_recursion - prints a string in reverse.
 * @s: the string
 * Return: nothing
 */
void _print_rev_recursion(char *s)
{
	int i;
	char **j;

	j = &s;

	i = strlen(s) - 1;
	if (**(j + i) != '\0')
	{
		_putchar(s[i]);
		i--;
		_print_rev_recursion(s[i]);
	}
}

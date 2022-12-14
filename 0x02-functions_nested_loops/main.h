#include <stdio.h>

/**
 *print_alphabet - prints the alphabet in lower case
 *
 *Return: nothing (void)
 */

void print_alphabet(void)
{
	char c;

	for (c = 97; c < 123; c++)
	{
		_putchar(c);

	}
	_putchar('\n');
}

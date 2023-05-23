#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase
 * Returns: zero 0 (Success)
 */
void print_alphabet(void)
{
	int a;

	a = 97;
	while (a < 123)
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}

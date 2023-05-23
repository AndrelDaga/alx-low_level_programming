#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet in lowercase 10x
 * Returns: nothing
 */
void print_alphabet_x10(void)
{
	int x;

	int a;

	x = 0;
	while (x < 10)
	{
		a = 97;
		while (a < 123)
		{
			_putchar(a);
			a++;
		}
		_putchar('\n');
		x++;
	}
}

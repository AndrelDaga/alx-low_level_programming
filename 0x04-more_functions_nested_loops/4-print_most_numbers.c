#include "main.h"

/**
 * print_most_numbers - prints numbers 0 through 9, except 2 and 4
 * Return: nothing
 */
void print_most_numbers(void)
{
	int i;

	i = 48;
	while (i < 58)
	{
		if (i == 50 || i == 52)
		{
			i++;
			continue;
		}
		else
		{
			_putchar(i);
			i++;
		}
	}
	_putchar('\n');
}

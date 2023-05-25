#include "main.h"

/**
 * more_numbers - prints 10 times the numbers from 0 to 14
 * Return: nothing
 */
void more_numbers(void)
{
	int i;

	int j;

	i = 0;

	while (i < 10)
	{
		j = 0;
		while (j < 15)
		{
			_putchar(j + '0');
			j++;
		}
		_putchar('\n');
		i++;
	}
	_putchar('\n');
}

#include "main.h"
#include <stdio.h>
/**
 * print_binary - prints the binary rep of a number
 * @n: the number
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int size, mask, l;
	int i;

	size = sizeof(unsigned long int) * 8;
	l = 0;

	if (n == 0)
	{
		_putchar('0');
	}
	for (i = size - 1; i >= 0; i--)
	{
		mask = n & (1 << i);
		if (mask == 0)
		{
			if (l)
			{
				_putchar('0');
			}
		}
		else
		{
			_putchar('1');
			l = 1;
		}
	}
	_putchar('\n');
}


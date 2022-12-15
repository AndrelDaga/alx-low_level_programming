#include "main.h"

/**
  * print_diagonal - draws a diagonal line on the terminal
  * @n: parameter
  * Return: nothing (nothing)
  */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int t;

		int i;

		t = 1;
		while (n > 0)
		{
			_putchar('\\');
			_putchar('\n');
			for (i = 0; i < t; i++)
			{
				_putchar('\t');
			}
			t = t + 1;
			n = n - 1;
		}
		_putchar('\n');
	}
}

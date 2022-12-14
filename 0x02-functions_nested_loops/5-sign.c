#include "main.h"

/**
  * print_sign - prints of a number
  * @n: number to be checked
  * Return: returns certain number accordingly
  */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
	}

        else if ( n == 0)
	{
		_putchar('0');
		return (0);
	}

	else (n < 0)
	{
		_putchar('-');
		return (-1);
	}
}

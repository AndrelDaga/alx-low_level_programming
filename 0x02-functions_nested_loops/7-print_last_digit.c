#include "main.h"

/**
  * print_last_digit - prints the last digit of a number
  * @x: function parameter
  *Return: returns an integer, the last digit of x
  */

int print_last_digit(int x)
{
	int l;

	l = x % 10;
	_putchar(l + '0');
	return (l);
}

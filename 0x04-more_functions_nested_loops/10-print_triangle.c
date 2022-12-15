#include "main.h"

/**
  *print_triangle - prints a triangle
  * @size: size of triangle
  * Return: nothing
  */

void print_triangle(int size)
{
	int n;

	int i;

	int j;

	int x;

	int k;

	x = size - 1;
	for (i = 1; i <= size; i++)
	{
		for (k = 0; k < x; k++)
		{
			_putchar(' ');
		}
		for (j = 0; j < i; j++)
		{
			_putchar('#');
		}
		x = x - 1;
		_putchar('\n');
	}
}

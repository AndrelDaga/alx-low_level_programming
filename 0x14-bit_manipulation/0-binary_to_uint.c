#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * binary_to_uint - converts a binary number to an unsinged integer
 * @b: the binary string
 * Return: an integer (unsigned)
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal;
	int i, j;
	int length;

	if (b == NULL)
	{
		return (0);
	}
	length = strlen(b);

	i = length - 1;
	j = 0;
	decimal = 0;

	while (i >= 0)
	{
		if (b[i] != '1' && b[i] != '0')
		{
			return (0);
		}
		if (b[i] == '1')
		{
			decimal += (1 * my_pow(2, j));
		}
		i--;
		j++;
	}
	return (decimal);
}

/**
 * my_pow - custom pow function
 * @x: the number
 * @y: the exponent
 * Return: an integer
 */
int my_pow(int x, int y)
{
	int prod, i;

	if (y == 0)
	{
		return (1);
	}
	prod = x;
	for (i = 1; i < y; i++)
	{
		prod *= x;
	}
	return (prod);
}


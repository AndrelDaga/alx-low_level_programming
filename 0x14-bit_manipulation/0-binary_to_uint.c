#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: the binary string
 * Return: a decimal
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	size_t len;
	unsigned int sum;
	unsigned int j;

	if (b == NULL)
	{
		return (0);
	}

	len = strlen(b);
	sum = 0;
	j = 0;
	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] != '1' && b[i] != '0')
		{
			return (0);
		}
		if (b[i] == '1')
		{
			sum += exponent(j);
		}
		j++;
	}
	return (sum);
}

/**
 * exponent - calculates the exponents of 2
 * @y: the power of 2
 * Return: unsigned int
 */
unsigned int exponent(unsigned int y)
{
	unsigned int i;

	unsigned int x;

	if (y == 0)
	{
		return (1);
	}
	if (y == 1)
	{
		return (2);
	}

	x = 2;
	for (i = 1; i < y; i++)
	{
		x *= 2;
	}
	return (x);
}

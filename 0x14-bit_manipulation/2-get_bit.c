#include "main.h"
/**
 * get_bit - gets bit at index
 * @n: the number
 * @index: the index
 * Return: integer
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	mask = n & (1 << index);
	if (mask == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}

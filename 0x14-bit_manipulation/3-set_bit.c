#include "main.h"
/**
 * set_bit - sets a bit to 1 at a certain index
 * @n: the number
 * @index: the index
 * Return: an integer
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	mask = *n | (1 << index);
	if (mask == 0)
	{
		return (-1);
	}
	else
	{
		return (1);
	}
}

#include "main.h"
#include <math.h>

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: param 1
 * @y: param 2
 * Return: an integer
 */
int _pow_recursion(int x, int y)
{
	int p;
	x = x / 1.0;
	y = y / 1.0;
	if (y < 0)
	{
		return (-1);
	}
	else
	{
		p = pow(x, y);
		return (p);
	}
}

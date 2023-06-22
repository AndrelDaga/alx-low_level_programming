#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: the number of arguments
 *
 * Return: nothing
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int e;

	int sum;

	va_list args;

	va_start(args, n);
	sum = 0;
	for (e = 0; e < n; e++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);
	return (sum);

}

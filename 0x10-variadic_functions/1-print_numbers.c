#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - print numbers followed by a new line.
 * @separator: the  string to be printed between numbers.
 * @n: the number of arguments
 *
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int e;

	int x;

	va_list args;

	va_start(args, n);
	for (e = 0; e < n; e++)
	{
		x = va_arg(args, int);
		if (separator == NULL)
		{
			printf("%d ", x);
		}
		else if (e == n - 1)
		{
			printf("%d", x);
		}
		else
		{
			printf("%d%s", x, separator);
		}
	}
	printf("\n");
	va_end(args);
}

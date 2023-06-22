#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - print strings followed by a new line.
 * @separator: the  string to be printed between numbers.
 * @n: the number of arguments
 *
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int e;

	char *x;

	va_list args;

	va_start(args, n);
	for (e = 0; e < n; e++)
	{
		x = va_arg(args, char *);
		if (x == NULL)
		{
			printf("(nil) ");
		}
		if (separator == NULL)
		{
			printf("%s ", x);
		}
		else if (e == n - 1)
		{
			printf("%s", x);
		}
		else
		{
			printf("%s%s", x, separator);
		}
	}
	printf("\n");
	va_end(args);
}

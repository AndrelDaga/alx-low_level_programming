#include "main.h"

/**
 * reverse_array - reverses the content of an array
 *
 * Description: 'Program's description'
 *
 *@a: the array
 *@n: number of elements of the array
 *
 *Return: nothing
 */

void reverse_array(int *a, int n)
{
	int i;

	for (i = n - 1; i >= 0; i--)
	{
		_putchar(a[i]);
	}
	_putchar('\n');
}

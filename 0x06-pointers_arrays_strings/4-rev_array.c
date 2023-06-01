#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: the array
 * @n: the number of elements of the array
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int x;

	int i;

	for (i = 0; i < (n / 2) + 2; i++)
	{
		x = a[i];
		a[i] = a[n - 1];
		a[n - 1] = x;
		n--;
	}
}

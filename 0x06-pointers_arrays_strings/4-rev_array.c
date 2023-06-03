#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: the array
 * @n: the number of elements of the array
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int temp;

	int i;

	int loop_count;

	if ((n % 2) == 0)
	{
		loop_count = n / 2;
	}
	else
	{
		loop_count = (n / 2) + 1;
	}

	for (i = 0; i < loop_count; i++)
	{
		temp = a[i];
		a[i] = a[n - 1];
		a[n - 1] = temp;
		n--;
	}
}

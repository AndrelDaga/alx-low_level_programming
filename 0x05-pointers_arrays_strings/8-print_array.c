#include <stdio.h>

/**
 *print_array - prints n element of array
 *
 *Description: 'the program's description'
 *
 *@a: the array
 *@n: the n elements
 *
 *Return: nothing
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i == n - 1)
			continue;
		else
			printf(", ");
	}
	printf("\n");
}

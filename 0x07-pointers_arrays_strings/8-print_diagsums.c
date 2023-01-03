#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 *
 *@a: pointer to array
 *@size: size of the matrix
 *Description: 'Program's description'
 *
 *Return: nothing
 */

void print_diagsums(int *a, int size)
{
	int f_sum;

	int s_sum;

	int i;

	int diagsum;

	f_sum = 0;
	s_sum = 0;

	for (i = 0; i < size; i++)
	{
		f_sum += a[i][i];
	}
	for (i = n - 1; i >= 0; i--)
	{
		s_sum += a[i][i];
	}
	diagsum = f_sum + s_sum;
	printf("%d\n", diagsum);
}

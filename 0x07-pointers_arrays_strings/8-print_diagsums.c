#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of two diagonals
 * of a square matrix of integers
 * @a: the array
 * @size: the size of the matrix
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
	int sum1;

	int sum2;

	int i;

	int j;

	sum2 = 0;

	sum1 = 0;
	for (i = 0; i < size; i++)
	{
		sum1 += *(a + i * size + i);
	}
	j = size - 1;
	for (i = 0; i < size; i++)
	{
		sum2 += *(a + i * size + j);
		j--;
	}
	printf("%d, %d\n", sum1, sum2);
}

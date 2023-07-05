#include "main.h"
#include <stdlib.h>
/**
 * array_range - creats an array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: pointer to a new array
 */
int *array_range(int min, int max)
{
	int size, i;

	int *array;

	if (min > max)
	{
		return (NULL);
	}
	size = max - min;

	array = malloc(size * sizeof(int));

	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		if (min <= max)
		{
			array[i] = min;
		}
		min++;
	}
	return (array);
}

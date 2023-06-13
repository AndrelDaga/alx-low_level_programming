#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars,
 *  and initializes it with a specific char.
 *  @size: array size
 *  @c: character to initialize with
 *  Return: a pointer
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;

	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		ptr = malloc(sizeof(char) * size);
		if (ptr == NULL)
		{
			return (NULL);
		}
		else
		{
			i = 0;
			while (i < size)
			{
				ptr[i] = c;
				i++;
			}
			return (ptr);
		}
	}
}

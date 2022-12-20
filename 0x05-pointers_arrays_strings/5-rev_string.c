#include "main.h"
#include <string.h>


/**
 * rev_string - reverses a string
 * @s: string to be reversed.
 * Return: returns nothing
 */

void rev_string(char *s)
{
	int size;

	char tmp[size];

	int i;

	int j;

	int x;

	size = strlen(s) + 1;

	j = 0;

	for (i = size - 2; i >= 0; i--)
	{
		tmp[j] = s[i];
		j++;
	}
	for (x = 0; x < size - 1; x++)
	{
		s[x] = tmp[x];
	}
}

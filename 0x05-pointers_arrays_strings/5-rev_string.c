#include "main.h"
#include <string.h>


/**
 * rev_string - reverses a string
 * @s: string to be reversed.
 * Return: returns nothing
 */

void rev_string(char *s)
{
	int size = strlen(s) + 1;

	char t[1000];

	int i;

	int j;

	int x;

	j = 0;
	for (i = size - 2; i >= 0; i--)
	{
		t[j] = s[i];
		j++;
	}
	for (x = 0; x < size - 1; x++)
	{
		s[x] = t[x];
	}
}

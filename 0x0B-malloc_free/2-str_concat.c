#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 *
 * Return: the concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	int size1;

	int size2;

	char *ptr1;

	int i;

	size1 = s1 == NULL ? 1 : strlen(s1);
	size2 = s2 == NULL ? 1 : strlen(s2);
	ptr1 = malloc(sizeof(char) * (size1 + size2 + 1));
	if (ptr1 == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size1; i++)
		{
			ptr1[i] = s1[i];
		}
		for (i = 0; i < size2; i++)
		{
			if (i == size2)
			{
				ptr1[size1 + i] = '\0';
			}
			ptr1[size1 + i] = s2[i];
		}
		return (ptr1);
	}
}

#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * puts2 - prints every other character
 * @str: string to be manipulated
 * Return: returns nothing
 */

void puts2(char *str)
{
	int i;

	int c;

	c = strlen(str);
	for (i = 0; i < c; i += 2)
	{
		printf("%c", str[i]);
	}
	printf("\n");
}

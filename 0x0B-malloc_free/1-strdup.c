#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given in the parameter
 * @str: the string
 *
 * Return: a pointer;
 */
char *_strdup(char *str)
{
	unsigned int size;
	char *ptr;

	size = strlen(str);
	ptr = malloc(sizeof(char) * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		strncpy(ptr, str, size);
		return (ptr);
	}


}

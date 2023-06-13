#include "main.h"
#include <string.h>

/**
 * _strncpy - copies a string. Works exactly like strncpy
 * @dest: parameter 1
 * @src: parameter 2
 * @n: parameter 3
 * Return: a pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}

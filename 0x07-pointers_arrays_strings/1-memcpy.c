#include "main.h"
#include <string.h>

/**
 * _memcpy - function that copies memory area.
 * @dest: var 1
 * @src: var 2
 * @n: var 3
 * Return: a pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}

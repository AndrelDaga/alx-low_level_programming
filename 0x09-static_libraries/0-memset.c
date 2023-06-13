#include "main.h"
#include <string.h>

/**
 * _memset -fills memory with a constant byte
 * @s: var 1
 * @b: var 2
 * @n: var 3
 * Return: a pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}

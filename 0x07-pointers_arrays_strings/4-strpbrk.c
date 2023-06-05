#include "main.h"
#include <string.h>

/**
 * _strpbrk - searches a dtring for any of a set of bytes.
 * @s: var 1
 * @accept: var 2
 * Return: a pointer
 */
char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}

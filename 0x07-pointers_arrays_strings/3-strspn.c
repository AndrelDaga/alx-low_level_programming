#include "main.h"
#include <string.h>

/**
 * _strspn - gets the length of a prefix substring
 * @s: var 1
 * @accept: var 2
 * Return: an integer value
 */
unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}

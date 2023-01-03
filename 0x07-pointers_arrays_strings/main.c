#include <string.h>

/**
 * _memset - fills memory with a constant byte.
 *
 *@s: parameter 1
 *@b: parameter 2
 *@n: parameter 3
 *Description: 'Program's description'
 *
 *Return: a pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}

#include <string.h>

/**
 * _strpbrk - searches a string for any of a set of bytes.
 *
 *@s: param1
 *@accept: param2
 *
 *Description: 'Program's description'
 *
 *Return: a pointer
 */

char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}

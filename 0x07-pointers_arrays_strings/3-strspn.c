#include <string.h>

/**
 * _strspn - gets the length of a prefix substring
 *
 *@s: param1
 *@accept: param2
 *
 *Description: 'Program's description'
 *
 *Return: an integer value
 */

unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}

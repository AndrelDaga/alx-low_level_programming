#include <string.h>

/**
 * _strncat - concatemates two strings
 *
 *Description: 'Program's description'
 *
 *@dest: destination
 *@src: source
 *@n: max number of bytes to use
 *
 *Return: returns nothing
 */

char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}

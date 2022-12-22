#include <string.h>

/**
 * _strncpy - copies a string
 *
 *Description: 'Program's description'
 *
 *@dest: destination
 *@src: source
 *@n: int number
 *
 *Return: returns a pointer
 */

char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}

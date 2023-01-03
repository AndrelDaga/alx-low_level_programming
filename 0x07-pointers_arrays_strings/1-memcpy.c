#include <string.h>

/**
 * _memcpy - copies memory area
 *
 *@dest: param1
 *@src: param2
 *@n: param3
 *Description: 'Program description'
 *
 *Return: a pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}

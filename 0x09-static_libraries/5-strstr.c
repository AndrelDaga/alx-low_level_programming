#include "main.h"
#include <string.h>

/**
 * _strstr - locates a substring
 * @haystack: var 1
 * @needle: var 2
 * Return: a pointer
 */
char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}

#include "main.h"
#include <string.h>

/**
 * _strncat - concatenates two strings
 * @dest: string 1
 * @src: string 2
 * @n: the function uses at most n bytes from src
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}

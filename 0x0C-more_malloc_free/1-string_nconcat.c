#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: the first nth chars of str2
 * Return: a pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t s1_len, s2_len, c_len;
	char *ptr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	s1_len = strlen(s1);
	s2_len = strlen(s2);

	if (n >= s2_len)
	{
		n = s2_len;
	}
	c_len = s1_len + n;
	ptr = malloc(sizeof(char) * c_len + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		strcpy(ptr, s1);
		strncat(ptr, s2, n);
		ptr[c_len] = '\0';
		return (ptr);

	}
}

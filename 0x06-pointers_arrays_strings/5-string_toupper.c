#include "main.h"
#include <ctype.h>

/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @s: the string
 * Return: returns a pointer
 */
char *string_toupper(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (islower(s[i]))
		{
			s[i] = toupper(s[i]);
		}
		i++;
	}
	return (s);
}

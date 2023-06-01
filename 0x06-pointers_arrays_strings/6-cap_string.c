#include "main.h"
#include <ctype.h>

/**
 * cap_string - capitalizes all words of a string
 * @s: the string
 * Return: a pointer
 */
char *cap_string(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == ',' || s[i] == ';' || s[i] == '.')
		{
			s[i + 1] = toupper(s[i + 1]);
		}
		if (s[i] == '!' || s[i] == '?' || s[i] == '"')
		{
			s[i + 1] = toupper(s[i + 1]);
		}
		if (s[i] == '(' || s[i] == ')' || s[i] == '{')
		{
			s[i + 1] = toupper(s[i + 1]);
		}
		if (s[i] == '}' || s[i] == '\n' || s[i] == '\t')
		{
			s[i + 1] = toupper(s[i + 1]);
		}
		i++;
	}
	return (s);
}

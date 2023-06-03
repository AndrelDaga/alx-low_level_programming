#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: the string to be encoded
 * Return: a pointer
 */
char *leet(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == 'a' || s[i] == 'A')
		{
			s[i] = '4';
			i++;
		}
		else if (s[i] == 'e' || s[i] == 'E')
		{
			s[i] = '3';
			i++;
		}
		else if (s[i] == 'o' || s[i] == 'O')
		{
			s[i] = '0';
			i++;
		}
		else if (s[i] == 't' || s[i] == 'T')
		{
			s[i] = '7';
			i++;
		}
		else if (s[i] == 'l' || s[i] == 'L')
		{
			s[i] = '1';
			i++;
		}
		else
		{
			i++;
			continue;
		}

	}
	return (s);
}

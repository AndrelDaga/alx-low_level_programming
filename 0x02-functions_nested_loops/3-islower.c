#include "main.h"
#include <ctype.h>

/**
  * _islower - checks if a character is lowercase
  *@c: character to be checked
  *Return: returns 1 is lowercase and 0 if otherwise
  */

int _islower(int c)
{
	if (islower(c))
		return (1);
	else
		return (0);
}

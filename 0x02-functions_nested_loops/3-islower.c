#include "main.h"
#include <ctype.h>

/**
  *_islower - checks if a character is lowercase and returns a value accordingly
  *Return: returns 1 is lowercase and 0 if otherwise
  */

int _islower(int c)
{
	if (islower(c))
		return 1;
	else
		return 0;
}

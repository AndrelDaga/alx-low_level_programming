#include "main.h"
#include <ctype.h>

/**
  * _isupper - checks for uppercase character
  * @c: function parameter
  * Return: and integer value
  */

int _isupper(int c)
{
	if (isupper(c))
		return (1);
	else
		return (0);
}



#include <unistd.h>
#include <stdio.h>

/**
 *_putchar - writes the character c to stdout
 *@c: The character to print
 *
 *Return: On success 1.
 *On error, -1 is returned, and errno is set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 *print_alphabet - prints the alphabet in lower case
 *
 *Return: nothing (void)
 */

void print_alphabet(void)
{
	char c;

	for (c = 97; c < 123; c++)
	{
		_putchar(c);

	}
	_putchar('\n');
}

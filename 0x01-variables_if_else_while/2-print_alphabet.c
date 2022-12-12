#include <stdio.h>

/**
 *main - Entry point
 *
 *Description: 'the program's description'
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	i = 97;
	while (i <= 122)
	{
		putchar(i);
		i = i + 1;
	}
	putchar('\n');

	return (0);
}

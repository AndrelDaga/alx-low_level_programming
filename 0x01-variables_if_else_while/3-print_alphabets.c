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
	int i, j;

	i = 97;
	while (i <= 122)
	{
		putchar(i);
		i = i + 1;
	}

	j = 65;
	while (j <= 90)
	{
		putchar(j);
		j = j + 1;
	}
	putchar('\n');

	return (0);
}

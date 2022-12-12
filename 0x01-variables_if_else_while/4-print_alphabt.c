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
		if (i == 113 || i == 101)
		{
			i = i + 1;
			continue;
		}
		putchar(i);
		i = i + 1;
	}
	putchar('\n');

	return (0);
}

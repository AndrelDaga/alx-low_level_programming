#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: displays a certain pattern of numbers using ifs and loops
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	int i;

	int j;

	int k;

	i = 48;
	k = 49;
	j = k;
	while (i < 57)
	{
		while (j < 58)
		{
			putchar(i);
			putchar(j);
			if (i != 56)
			{
				putchar(',');
			}
			putchar(' ');
			j++;
		}
		k++;
		j = k;
		i++;
	}
	putchar('\n');
	return (0);
}

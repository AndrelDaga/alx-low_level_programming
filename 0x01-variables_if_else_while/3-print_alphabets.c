#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints out a sentence
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;

	int b;

	a = 97;
	b = 65;
	while (a < 123)
	{
		putchar(a);
		a++;
	}
	while (b < 91)
	{
		putchar(b);
		b++;
	}
	putchar('\n');
	return (0);
}

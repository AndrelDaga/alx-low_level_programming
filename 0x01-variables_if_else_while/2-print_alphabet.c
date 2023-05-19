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

	a = 97;
	while (a < 123)
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints alphabet in reverse and in lower case
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;

	a = 122;
	while (a > 96)
	{
		putchar(a);
		a--;
	}
	putchar('\n');
	return (0);
}

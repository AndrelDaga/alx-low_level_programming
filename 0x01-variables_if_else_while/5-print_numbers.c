#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints out numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;

	a = 48;
	while (a < 58)
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);

}

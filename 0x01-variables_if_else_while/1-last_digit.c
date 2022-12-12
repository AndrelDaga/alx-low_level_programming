#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - function
 *
 *Desciption: 'This is a doc for the main function'
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	l = n % 10;

	printf("Last digit of %d is", l);
	if (l > 5)
		printf(" and is greater than 5");
	if (l == 0)
		printf(" and is 0");
	if (l < 6 && l != 0)
		printf(" and is less than 6 and not 0");
	printf("\n");

	return (0);
}

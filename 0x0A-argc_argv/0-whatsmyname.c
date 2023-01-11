#include <stdio.h>

/**
 * main - prints its own name
 * @argc: stores the number of parameters passed to program
 * @argv: stores pointers to each argument
 * Description: 'Progrma's description'
 * Return: returns nothing
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}

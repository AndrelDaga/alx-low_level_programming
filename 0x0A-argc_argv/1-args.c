#include <stdio.h>

/**
 * main - prints out the number of arguments passed to it
 * @argc: stores the number of arguments
 * @argv: stores pointers to the arguments
 * Description: 'Program's description'
 * Return: returns zero
 */

int main(int argc, char *argv[])
{
	(void) argv;
	if (argc > 1)
	{
		printf("%d\n", --argc);
	}
	else
	{
		printf("%d\n", 0);
	}
	return (0);
}

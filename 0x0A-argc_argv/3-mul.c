#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints out the number of arguments passed to it
 * @argc: stores the number of arguments
 * @argv: stores pointers to the arguments
 * Description: 'Program's description'
 * Return: returns zero
 */

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		int mul;

		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}

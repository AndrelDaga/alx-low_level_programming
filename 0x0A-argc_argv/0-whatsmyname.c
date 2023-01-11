#include <stdio.h>

/**
 * main - prints it's own name
 * @argc - stores number of argument
 * @argv - stores pointer to arguments
 * Description: 'Program's description'
 * return: returns zero
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
		return (0);
	}
}

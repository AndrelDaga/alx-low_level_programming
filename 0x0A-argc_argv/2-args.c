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
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * main - adds positive numbers
 * @argc: the number of arguments
 * @argv: the arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int sum;

	int i;

	sum = 0;
	if (argc < 2)
	{
		printf("%d\n", sum);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (atoi(argv[i]) && isdigit(atoi(argv[i])))
			{
				sum += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}

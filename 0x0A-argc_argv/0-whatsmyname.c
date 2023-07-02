#include <stdio.h>
#include "main.h"
/**
 * main - prints name of program
 * @argc: the number of command line arguments
 * @argv: the command line arguments
 * Return: an integer 0;
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}

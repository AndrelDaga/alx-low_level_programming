#include <stdio.h>

/**
 * main - prints the name of a the file it was 
 * compiled from
 * Return: 0 for successful
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}

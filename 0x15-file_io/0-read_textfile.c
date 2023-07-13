#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
/**
 * read_textfile - reads a text file and prints it to the POSIX
 * standard output
 * @filename: the filename
 * @letters: the letters to write
 * Return: the number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *array;
	FILE *ptr;
	ssize_t num_read;

	if (filename == NULL)
	{
		return (0);
	}
	array = malloc(sizeof(char) * (letters + 1));
	if (array == NULL)
	{
		return (0);
	}
	ptr = fopen(filename, "r");
	if (ptr == NULL)
	{
		fclose(ptr);
		return (0);
	}
	num_read = fread(array, sizeof(char), letters, ptr);
	if (num_read < 0)
	{
		fclose(ptr);
		return (0);
	}
	array[num_read] = '\0';
	write(1, array, num_read);
	fclose(ptr);
	return (num_read);

}

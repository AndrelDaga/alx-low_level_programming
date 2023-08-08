#include "main.h"
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * create_file - creates a file
 * @filename: the file name
 * @text_content: file content to write
 * Return: 1 on success and -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t nr;
	int fd;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = creat(filename, 0600);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		return (1);
	}
	nr = write(fd, text_content, strlen(text_content));
	if (nr == -1)
	{
		return (-1);
	}

	return (1);
}

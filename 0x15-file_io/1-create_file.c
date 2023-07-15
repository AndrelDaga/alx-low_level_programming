#include "main.h"
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
/**
 * create_file - creates a file
 * @filename: name of the file to create
 * @text_content: a NULL terminated string to write to file
 * Return: 1 if success and -1 if failure
 */
int create_file(const char *filename, char *text_content)
{
	int file_desc;
	ssize_t num_write;
	size_t text_length;

	if (filename == NULL)
	{
		return (-1);
	}
	file_desc = creat(filename, S_IRUSR | S_IWUSR);
	if (file_desc == -1)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		return (1);
	}
	else
	{
		text_length = strlen(text_content);
		num_write = write(file_desc, text_content, text_length);
		if (num_write == -1)
		{
			return (-1);
		}
		return (1);
	}

}

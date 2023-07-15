#include "main.h"
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: the name of the file
 * @text_content: the content to append
 * Return: 1 if success and -1 if failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_desc;
	ssize_t num_write;
	size_t text_length;

	if (filename == NULL)
	{
		return (-1);
	}
	file_desc = open(filename, O_WRONLY | O_APPEND);
	if (file_desc == -1)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		return (1);
	}
	text_length = strlen(text_content);
	num_write = write(file_desc, text_content, text_length);
	if (num_write == -1)
	{
		return (-1);
	}
	return (1);
}

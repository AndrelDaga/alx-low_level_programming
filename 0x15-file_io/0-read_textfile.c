#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile - reads a textfile
 * @filename: the filename
 * @letters: the number of characters to read
 * Return: the number of characters read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t nr;
	ssize_t lt;
	int fd;

	lt = letters;
	if (filename == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters + 1);
	nr = read(fd, buf, letters);
	if (nr == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}
	nr = write(STDOUT_FILENO, buf, letters);
	if (nr == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}
	if (nr < lt)
	{
		free(buf);
		close(fd);
		return (0);
	}
	free(buf);
	close(fd);
	return (nr);
}

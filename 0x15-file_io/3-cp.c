#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#define MYBUFSIZ 1024

/**
 * main - implements a simple cp command
 * @ac: the number of arguments
 * @av: the actual arguments
 * Return: 0
*/

int main(int ac, char **av)
{
	int fd_from, fd_to;
	ssize_t nr, nr2;
	char buf[MYBUFSIZ];
	char nl;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to");
		return (97);
	}
	fd_from = open(av[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from %s\n", av[1]);
		return (98);
	}
	fd_to = creat(av[2], 0664);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		return (99);
	}
	do {
		nr = read(fd_from, buf, MYBUFSIZ);
		if (nr == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from %s\n", av[1]);
			return (98);
		}
		nr2 = write(fd_to, buf, nr);
		if (nr2 == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			return (99);
		}
	} while (nr > 0);
	nl = '\n';
	write(fd_to, &nl, 1);
	return (0);
}


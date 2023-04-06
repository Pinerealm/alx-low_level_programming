#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void handle_file_error(int file_from, int file_to, char **av);
void handle_close_error(int file_from, int file_to);

/**
 * main - entry point
 * @ac: argument count
 * @av: argument vector
 *
 * Return: 0 on success, 1 on failure
 */
int main(int ac, char **av)
{
	int file_from, file_to;
	ssize_t nread;
	char buf[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(av[1], O_RDONLY);
	file_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC | O_APPEND, 0664);
	handle_file_error(file_from, file_to, av);

	while ((nread = read(file_from, buf, 1024)) > 0)
	{
		if (write(file_to, buf, nread) != nread)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
	}
	if (nread == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	handle_close_error(file_from, file_to);

	return (0);
}

/**
 * handle_file_error - handles file read/write errors
 * @file_from: file to read from
 * @file_to: file to write to
 * @av: argument vector
 */
void handle_file_error(int file_from, int file_to, char **av)
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
}

/**
 * handle_close_error - handles file close errors
 * @file_from: file to read from
 * @file_to: file to write to
 */
void handle_close_error(int file_from, int file_to)
{
	if (close(file_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	if (close(file_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
}

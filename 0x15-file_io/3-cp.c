#include "main.h"

void print_invalid_fd(int file_from, int file_to, char **av);
void print_invalid_close(int res, int fd);

/**
 * main - copies the contents of a file to another file
 *
 * @ac: number of command line arguments
 * @av: array of command line arguments
 *
 * Return: 0 on success, 1 on failure
 */
int main(int ac, char **av)
{
	int fd, fd2, bytes_read, bytes_written, close_res;
	char *buffer;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", av[0]);
		exit(97);
	}

	fd = open(av[1], O_RDONLY);
	fd2 = open(av[2], O_WRONLY | O_CREAT | O_TRUNC | O_APPEND, 0664);
	/* if open fails */
	print_invalid_fd(fd, fd2, av);

	buffer = malloc(sizeof(char) * BUFFER_SIZE);
	if (!buffer)
		exit(1);
	while ((bytes_read = read(fd, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd2, buffer, bytes_read);
		/* if write fails */
		print_invalid_fd(0, bytes_written, av);
	}
	/* if read fails */
	print_invalid_fd(bytes_read, 0, av);
	free(buffer);

	close_res = close(fd);
	print_invalid_close(close_res, fd);
	close_res = close(fd2);
	print_invalid_close(close_res, fd2);

	return (0);
}

/**
 * print_invalid_fd - prints error message if fd is invalid
 *
 * @file_from: file descriptor
 * @file_to: file descriptor
 * @av: array of arguments
 *
 * Return: void
 */
void print_invalid_fd(int file_from, int file_to, char **av)
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
					av[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
}

/**
 * print_invalid_close - prints error message if close fails
 *
 * @res: return value of  calling close()
 * @fd: file descriptor
 *
 * Return: void
 */
void print_invalid_close(int res, int fd)
{
	if (res == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

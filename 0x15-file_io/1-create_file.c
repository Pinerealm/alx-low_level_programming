#include "main.h"

int _strlen(char *str);

/**
 * create_file - creates a file
 *
 * @filename: name of the file to create
 * @text_content: content of the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int n;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	n = write(fd, text_content, _strlen(text_content));
	if (n == -1)
		return (-1);
	close(fd);

	return (1);
}

/**
 * _strlen - returns the length of a string
 * @str: pointer to the string
 *
 * Return: length of the string
 */
int _strlen(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
		;
	return (i);
}

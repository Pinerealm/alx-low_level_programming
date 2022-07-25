#include "main.h"

int _strlen(char *s);

/**
 * append_text_to_file - appends text to the end a file
 *
 * @filename: name of the file
 * @text_content: text to append to the file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len, b_write;

	if (!filename)
		return (-1);
	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
		return (-1);

	len = _strlen(text_content);
	b_write = write(fd, text_content, len);
	if (b_write != len)
		return (-1);
	close(fd);

	return (1);
}

/**
 * _strlen - returns the length of a string
 * @s: pointer to the string
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len])
		len++;
	return (len);
}

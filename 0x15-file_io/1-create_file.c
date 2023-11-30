#include "main.h"

/**
 * _strlen - return the length of the string
 * @s: string
 * Return: length
 */

int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);
	while (*s++)
		i++;
	return (i);
}


/**
 * create_file - creates a file
 * @filensme: name of file to be created
 * @texz_content: text to write
 * Return: 1 or 0
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes = 0, len = _strlen(text_content);

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC | S_IWUSR);
	if (fd == -1)
		return (-1);
	if (len)
		bytes = write(fd, text_content, len);
	close(fd);
	return (bytes = len ? 1 : -1);
}

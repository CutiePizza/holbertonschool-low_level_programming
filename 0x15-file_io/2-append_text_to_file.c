#include "holberton.h"

/**
 * append_text_to_file - Create a file
 * @filename: file name
 * @text_content: content of file
 * Return: 1 or -1
 */

int append_text_to_file(const char *filename, char *text_content)
{

	int fd, i = 0, w;

	if (filename == NULL)
		return (-1);
		fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
		return (1);
	while (text_content[i])
		i++;
	w = write(fd, text_content, i);
	if (w == -1 || w != i)
		return (-1);
	return (1);
}

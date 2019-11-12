#include "holberton.h"

/**
  * read_textfile - read a tet file and prints it
  * @filename: file name
  * @letters: number of letters it should print
  * Return: actual number it could read
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t r;
	ssize_t w;
	char *str;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	str = malloc(letters * sizeof(char));
	if (str == NULL)
		return (0);
	r = read(fd, str, letters);
	if (r == -1)
		return (0);
	str[r] = '\0';
	w = write(STDOUT_FILENO, str, r);
	if (w == -1 || w != r)
		return (0);
	close(fd);
	return (w);
}

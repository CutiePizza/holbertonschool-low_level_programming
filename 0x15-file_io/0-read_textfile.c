#include "holberton.h"

/**
  * read_textfile - read a tet file and prints it
  * @filename: file name
  * @letters: number of letters it should print
  * Return: actual number it could read
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd = open(filename, O_RDWR);
	ssize_t r;
	ssize_t w;
	char *str = malloc(letters * sizeof(char));

	if (fd == 0 || filename == NULL)
		return (0);

	r = read(fd, str, letters);
	if (r == -1)
		return (0);
	w = write(1, str, letters);
	if (w == -1)
		return (0);
	return (w);
}

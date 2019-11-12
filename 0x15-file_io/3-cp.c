#include "holberton.h"
/**
 * verif - verif
 * @fd: fd
 */
void verif(int fd)
{

	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * print - print
 * @r1: r1
 * @buff1: buff1
 * @fd1: fd1
 * @fd2: fd2
 * @argv1: argv1
 * @argv2: argv2
 */

void print(ssize_t r1, char *buff1,
		int fd1, int fd2, char *argv1, char *argv2)
{
	while ((r1 = read(fd1, buff1, 1024)) > 0)
	{
		if ((write(fd2, buff1, r1)) != r1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv2);
			exit(99);
		}
	}

	if (r1 == -1)
		{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv1);
		exit(98);
		}
}


/**
 * main - main function
 * @argc: number of arguments
 * @argv: arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{

	int fd1, fd2, f1, f2;
	ssize_t r1 = 0;
	char buff1[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd1 = open(argv[1], O_RDONLY);
	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	print(r1, buff1, fd1, fd2, argv[1], argv[2]);
	f1 = close(fd1);
	f2 = close(fd2);
	verif(f1);
	verif(f2);
	return (0);
}

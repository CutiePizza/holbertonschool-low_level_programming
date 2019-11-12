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
 * @w1: w1
 * @buff1: buff1
 * @fd1: fd1
 * @fd2: fd2
 * @argv1: argv1
 * @argv2: argv2
 */

void print(int r1, int w1, char *buff1,
		int fd1, int fd2, char *argv1, char *argv2)
{
	while (buff1 != NULL)
	{
		r1 = read(fd1, buff1, 1024);
		if (r1 <= 0)
			buff1 = NULL;
		if (r1 == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv1);
			exit(98);
		}
		w1 = write(fd2, buff1, r1);
		if (w1 == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv2);
			exit(99);
		}
	}
}


/**
 * main - main function
 * @argc: number of arguments
 * @argv: arguments
 * Return: 0
 */

int main(int argc, char **argv)
{

	int fd1, fd2, r1 = 0, w1 = 0;
	char *buff1;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	if (argv[1] == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fd1 = open(argv[1], O_RDWR);

	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd2 = open(argv[2], O_RDWR | O_CREAT | O_TRUNC, 0664);

	if (fd2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	buff1 = malloc(1024);
	if (buff1 == NULL)
		return (-1);
	print(r1, w1, buff1, fd1, fd2, argv[1], argv[2]);
	close(fd1);
	close(fd2);
	verif(fd1);
	verif(fd2);
	free(buff1);
	return (0);
}

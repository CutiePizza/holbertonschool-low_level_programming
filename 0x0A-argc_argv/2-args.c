#include <stdio.h>

/**
  * main - prints alll arguements
  * @argc: number of arguments passed
  * @argv: arguments
  * Return: 0.
  */

int main(int argc, char *argv[])
{
	int i;

	if (argc - 1 != 0)
	{
		for (i = 1; i < argc; i++)
			printf("%s\n", argv[i]);
	}

	return (0);
}

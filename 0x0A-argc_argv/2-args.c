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

		for (i = 0; i < argc; i++)
			printf("%s\n", argv[i]);


	return (0);
}

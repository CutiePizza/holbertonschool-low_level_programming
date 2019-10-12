#include <stdio.h>
#include <stdlib.h>

/**
  * main - adds numbers
  * @argc: number of arguments
  * @argv: arguments
  * Return: 1 or 0.
  */

int main(int argc, char *argv[])
{

	int sum = 0, i, n;
	if (argc == 1)
	{
		printf("0\n");
	}
	else if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
		if (atoi(argv[i]))
		{
		n = atoi(argv[i]);
		sum += n;
		}
		else
		{
		printf("Error\n");
		return (1);
		}
		}
		printf("%d\n", sum);
	}
return (0);
}

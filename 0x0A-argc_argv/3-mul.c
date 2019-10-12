#include <stdio.h>
#include <stdlib.h>

/**
  * main - Program that multiplies two numbers
  * @argc: number of arguments
  * @argv: arguments
  * Return: 0.
  */

int main(int argc, char *argv[])
{

	int num1, num2, res;

	if (argc - 1 <= 1 || argc - 1 > 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		res = num1 * num2;
		printf("%d\n", res);
	}
	return (0);

}

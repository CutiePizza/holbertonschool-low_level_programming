#include <stdio.h>
#include <stdlib.h>

/**
  * main - Prints minimum number of coins to make change for an amount of money
  * @argc: Number of argments
  * @argv: Arguments
  * Return: 0 or 1.
  */

int main(int argc, char *argv[])
{
	int n, min = 0, i, max, c = 0, l;
	int T[5] = {1, 2, 5, 10, 25};

	if (argc - 1 != 1)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		n = atoi(argv[1]);
	if (n < 0)
	printf("0\n");
	else
	{
	while (n != 0)
	{
	max = n - T[0];
	for (i = 0; i < 5; i++)
	{
		l = n - T[i];
		if (l >= 0)
		{
		if (max >= l)
		{
			max = n - T[i];
			min = i;
		}
		}
		else if (max - T[i] == 0)
			min = i;
	}
	n -= T[min];
	c++;
	}
	printf("%d\n", c);
	}
	}
return (0);
}

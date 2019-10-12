#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int is_positive(char *ch);

/**
  * main - adds numbers
  * @argc: number of arguments
  * @argv: arguments
  * Return: 1 or 0.
  */

int main(int argc, char *argv[])
{

	int sum = 0, i, n;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
		if (is_positive(argv[i]) == 0)
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
	}
		printf("%d\n", sum);
return (0);
}

/**
  * is_positive - check if parameter is postive number
  * @ch: string
  * Return: 0 if true, 1 if not
  */

int is_positive(char *ch)
{
	int i = 0;

	while (ch[i] != '\0')
	{
		if (isdigit(ch[i]) == 0)
			return (1);
		i++;
	}
	return (0);

}

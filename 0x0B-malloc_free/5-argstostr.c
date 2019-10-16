#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
  * argstostr - concatenates all arguments of my program
  * @ac: number of arguments
  * @av: arguments
  * Return: Pointer to a new String
  */

char *argstostr(int ac, char **av)
{
	int i, j, count = 0, c = 0;
	char *s;

	if (ac == 0 || *av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			count++;
	}
	s = malloc(count + 1 + count * sizeof(char));

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			s[c] = av[i][j];
			c++;
		}
		s[c] = '\n';
		c++;
	}
s[count + count] = '\0';
return (s);
}

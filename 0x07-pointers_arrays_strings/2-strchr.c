#include "holberton.h"

/**
  * _strchr - locates a chatracter in a string
  * @s: character
  * @c: character
  * Return: pointer to s
  */

char *_strchr(char *s, char c)
{

	int i, j = 0;

	while (*(s + j) != '\0')
		j++;

	for (i = 0; i < j; i++)
	{
		if (*(s + i) == c)
			return (&(*(s + i)));
	}

	return (0);
}

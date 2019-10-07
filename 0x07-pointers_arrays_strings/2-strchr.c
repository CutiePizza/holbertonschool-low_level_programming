#include "holberton.h"

/**
  * _strchr - locates a chatracter in a string
  * @s: character
  * @c: character
  * Return: pointer to s
  */

char *_strchr(char *s, char c)
{

	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (*(s + i) == c)
			return (&(*(s + i)));
	}

	return (0);
}

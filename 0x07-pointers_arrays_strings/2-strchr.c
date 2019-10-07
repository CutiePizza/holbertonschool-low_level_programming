#include "holberton.h"

/**
  * _strchr - locates a chatracter in a string
  * @s: character
  * @c: character
  * Return: pointer to s
  */

char *_strchr(char *s, char c)
{

	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	return (0);
}

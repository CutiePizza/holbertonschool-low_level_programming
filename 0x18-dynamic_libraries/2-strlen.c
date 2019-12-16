#include "holberton.h"

/**
 * _strlen - count length of a string.
 * @s : character
 * Return: length of the string
 */

int _strlen(char *s)
{
	int i = 0;
	int c = 0;

	while (s[i] != '\0')
	{
		c++;
		i++;
	}
	return (c);
}



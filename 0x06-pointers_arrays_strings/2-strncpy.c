#include "holberton.h"

/**
 * _strncpy - copies a string
 * @dest: character
 * @src: character
 * @n: integer
 * Return: String
 */

char *_strncpy(char *dest, char *src, int n)
{

	int lenD = 0, lenS = 0, i;

	while (dest[lenD] != '\0')
	{
		lenD++;
	}
	while (src[lenS] != '\0')
	{
		lenS++;
	}

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
		if (i > lenS)
			dest[i] = 0;
	}

	return (dest);

}

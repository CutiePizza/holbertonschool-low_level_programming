#include "holberton.h"

/**
 * _strcpy - copies src to dest.
 * @dest: char
 * @src: char
 */

char *_strcpy(char *dest, char *src)
{

	int l, j;

	l = 0;
	while (src[l] != '\0')
	{
		l++;
	}

	for (j = 0; j < l; j++)
	{
		dest[j] = src[j];
	}
	dest[j] = '\0';

	return (dest);
}

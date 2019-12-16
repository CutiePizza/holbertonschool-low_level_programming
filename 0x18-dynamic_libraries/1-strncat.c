#include "holberton.h"

/**
 * _strncat - concatenate two strings, takes n bytes from src.
 * @dest: character
 * @src : character
 * @n : integer
 * Return: char
 */

char *_strncat(char *dest, char *src, int n)
{
	int l = 0, l2 = 0, j;

	while (dest[l] != '\0')
	{
		l++;
	}
	while (src[l2] != '\0')
	{
		l2++;
	}

	if (n <= l2)
	{
		for (j = 0; j < n; j++)
		{
			dest[l] = src[j];
			l++;
		}
	}
	else
	{
		for (j = 0; j < l2; j++)
		{
			dest[l] = src[j];
			l++;
		}
	}
	return (dest);
}

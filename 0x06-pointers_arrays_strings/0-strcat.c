#include "holberton.h"
/**
 * _strcat - check the code for Holberton School students.
 * @dest: charcater
 * @src: character
 * Return: Always 0.
 */

char *_strcat(char *dest, char *src)
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

	for (j = 0; j < l2; j++)
	{
		dest[l] = src[j];
		l++;
	}

	return (dest);
}

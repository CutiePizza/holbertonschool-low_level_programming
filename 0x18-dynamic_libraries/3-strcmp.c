#include "holberton.h"

/**
 * _strcmp - compares two strings.
 * @s1: char
 * @s2: char
 * Return: an integer
 */

int _strcmp(char *s1, char *s2)
{

	int l1 = 0, l2 = 0, c = 0, sup, i = 0;

	while (s1[l1] != '\0')
		l1++;
	while (s2[l2] != '\0')
		l2++;

	if (l1 > l2)
		sup = l2;
	else
		sup = l1;

	while (i < sup && c == 0)
	{
		c = s1[i] - s2[i];
		i++;
	}

	return (c);
}

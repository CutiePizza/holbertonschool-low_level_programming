#include "holberton.h"

/**
 * rev_string - Reverses a string
 * @s: pointer to character
 */

void rev_string(char *s)
{
	int i, j;
	char n;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	for (j = 0; j <= i / 2; j++)
	{
		n = s[j];
		s[j] = s[i - j];
		s[i - j] = n;
	}
}


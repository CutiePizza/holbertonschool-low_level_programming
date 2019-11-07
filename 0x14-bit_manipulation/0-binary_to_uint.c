#include "holberton.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int
 * @b: char
 * Return: Unsigned int or NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i, len = 0, uint = 0;

	if (b == NULL)
		return (0);
	while (b[len])
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);

		len++;
	}
	len--;
	for (i = 0; b[i]; i++)
	{
		if (b[i] == '1')
			uint += 1 << len;
		len--;
	}
	return (uint);
}

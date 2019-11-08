#include "holberton.h"

/**
 * get_endianness - get endianness
 * Return: int
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *)&i;

	if (!((*c >> 1) & 1))
		return (1);
	else
		return (0);
}

#include "holberton.h"

/**
 * flip_bits - flip bits
 * @n: Unsigned int
 * @m: unsigned int
 * Return: int
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int c = 0;

	unsigned long int res;

	res = n ^ m;

	while (res)
	{
		c += res & 1;
		res >>= 1;

	}
	return (c);

}

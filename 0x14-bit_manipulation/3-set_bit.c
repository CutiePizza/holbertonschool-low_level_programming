#include "holberton.h"

/**
  * set_bit - set the value of a bit at a given index
  * @n: Unsigned int
  * @index: unsigned int
  * Return: int
  */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 32)
		return (-1);
	*n += 1 << index;
	return (1);

}

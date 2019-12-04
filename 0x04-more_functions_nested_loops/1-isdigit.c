#include "holberton.h"

/**
 * _isdigit - return 1 if digit
 * @c: integer
 * Return: 0 or 1
 */

int _isdigit(int c)
{
	int n = 0;

	if (c >= '0' && c <= '9')
		n = 1;

	return (n);
}

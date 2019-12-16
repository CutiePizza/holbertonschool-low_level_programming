#include "holberton.h"

/**
 * _isupper - return 1 if character is lowercase
 * @c: integer
 * Return: 0 or 1
 */

int _isupper(int c)
{
	int n = 0;


	if (c >= 'A' && c <= 'Z')
		n = 1;

	return (n);
}

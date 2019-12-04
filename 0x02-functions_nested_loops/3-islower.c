#include "holberton.h"
/**
 * _islower - return 1 if character is lowercase
 * @c: character
 * Return: 0 or 1
 */

int _islower(int c)
{
	int n = 0;


	if (c >= 'a' && c <= 'z')
		n = 1;

	return (n);
}

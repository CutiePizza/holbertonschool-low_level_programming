#include "holberton.h"

/**
 * print_alphabet_x10 - Print the alphabet in lowercase 10 times.
 *
 * Return: alphabet
 */

void print_alphabet_x10(void)
{
	int i = 0;
	char j;

	while (i < 10)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
		i++;
	}
}

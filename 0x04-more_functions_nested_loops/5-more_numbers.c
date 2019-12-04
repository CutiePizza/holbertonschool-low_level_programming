#include "holberton.h"

/**
 * more_numbers - prints 10 times numbers from 0 to 14.
 *
 * Return: Always 0.
 */

void more_numbers(void)
{
	int i;
	int j = 0;

	while (j < 10)
	{
		for (i = 0; i < 15; i++)
		{
			if (i >= 10)
				_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
		}
		j++;
		_putchar('\n');
	}
}

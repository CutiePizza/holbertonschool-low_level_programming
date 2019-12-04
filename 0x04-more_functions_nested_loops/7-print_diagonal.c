#include "holberton.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: integer
 * Return: Always.
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			if (i == 0)
			{
				_putchar('\\');
				_putchar('\n');
			}
			else
			{
				for (j = 0; j < i; j++)
				{
					_putchar(' ');
				}
				_putchar('\\');
				_putchar('\n');
			}
		}
	}


}

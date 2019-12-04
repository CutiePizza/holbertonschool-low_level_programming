#include "holberton.h"

/**
 * print_times_table - prints the n times table, starting with 0.
 * @n: integer
 */

void print_times_table(int n)
{
	if ((n >= 0) && (n <= 15))
	{
		int i, j, r;

		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				r = i * j;
				if ((r == 0) && (j == 0))
					_putchar(r + '0');
				else if (r <= 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(r + '0');
				}
				else if (r <= 99)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(r / 10 + '0');
					_putchar(r % 10 + '0');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar(r / 100 + '0');
					_putchar((r / 10) % 10 + '0');
					_putchar(r % 10 + '0');
				}
			}
			_putchar('\n');
		}
	}
}

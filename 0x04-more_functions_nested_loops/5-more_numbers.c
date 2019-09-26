#include "holberton.h"
/**
* more_numbers - check the code for Holberton School students.
*
* Return: Always 0.
*/

void more_numbers(void)
{
int i;
int j = 0;
	while (j < 10)
	{
		for (i = 0; i < 10; i++)
		{
			_putchar(i + '0');
		}
		for (i = 10; i < 15; i++) 
		{
			_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
		}
		j++;
		_putchar('\n');
	}
}

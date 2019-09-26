#include "holberton.h"
/**
 * print_triangle - check the code for Holberton School students.
 * @size: integer
 * Return: Always 0.
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
	 _putchar('\n');
	}
	else
	{
	for (i = 1; i <= size; i++)
	{	
		for (j = size; j > 0; j--)
		{
		_putchar(35);
		}
		_putchar('\n');
	}
}
}



#include "holberton.h"

/**
  * print - print the binary representation of a number
  * @n: unsigned int
  */
void print(unsigned long int n)
{
	if (n != 0)
	{
		print(n >> 1);
	if (n & 1)
		_putchar('1');
		else
		_putchar('0');
	}
}

/**
  * print_binary - print the binary representation of a number
  * @n: unsigned int
  */

void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else
		print(n);
}

#include "holberton.h"
/**
   * print_last_digit - entry point
    * @c: number to  check
     * Return: Always 0 (Success)
      */
int print_last_digit(int c)
{
	c %= 10;
	if (c < 0)
		c = -c;
	_putchar(c + '0');
	return (c);
}

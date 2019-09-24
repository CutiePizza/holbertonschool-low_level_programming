#include "holberton.h"
/**
* print_last_digit - check the code for Holberton School students.
*@c: integer
* Return: Always c.
*/
int print_last_digit(int c)
{
if (c < 0)
c = -c;
_putchar(c % 10 + '0');
return (c % 10);
}

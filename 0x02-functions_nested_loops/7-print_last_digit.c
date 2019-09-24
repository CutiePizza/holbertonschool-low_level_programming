#include "holberton.h"
/**
* print_last_digit - check the code for Holberton School students.
*@c: integer
* Return: Always c.
*/
int print_last_digit(int c)
{
int n;
if (c < 0)
c = -c;
n = c % 10;
_putchar(n + '0');
return (n);
}

#include "holberton.h"

int print_last_digit(int c)
{
if (c < 0)
c = -c;
_putchar(c % 10 + '0');
return (c % 10);
}

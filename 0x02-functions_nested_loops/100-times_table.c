#include "holberton.h"

void print_times_table(int n)
{
int i, j;
 if (n < 15 && n > 0)
{
for (i = 0; i < n; i++)
{
for (j = 0; j < n; j++)
{
int s = i*j;
if (s / 10 != 0 )
{
_putchar(s / 10 + '0');
}
_putchar(s % 10 + '0');
if ( j != n )
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}
}


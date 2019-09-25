#include "holberton.h"
/**
*print_times_table - check the code for Holberton School students.
*@n: integer
* Return: Always 0.
*/
void print_times_table(int n)
{
int i, j, s;
if (n > 0 && n < 15)
{
for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
s = i * j;
if (s == 0 && j == 0)
	_putchar(s + '0');
if (s >= 10 && s < 100)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(s / 10 + '0');
_putchar(s % 10 + '0');
}
else if (s > 99)
{
_putchar(',');
_putchar(' ');
_putchar(s / 100 + '0');
_putchar(s % 100 / 10 + '0');
_putchar(s % 10 + '0');
}
else
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(' ');
_putchar(s + '0');
}
}
_putchar('\n');
}
}
}

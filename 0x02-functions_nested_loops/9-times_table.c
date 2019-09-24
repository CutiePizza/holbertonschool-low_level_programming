#include "holberton.h"
/**
* times_table - check the code for Holberton School students.
*
* Return: Always 0.
*/
void times_table(void)
{
int i, j, s;

for (i = 0; i < 10; i++)
{
for (j = 0; j < 10; j++)
{
s = i * j;
if (s >= 10)
{
_putchar(' ');
_putchar(s / 10 + '0');
_putchar(s % 10 + '0');
if (j != 9)
_putchar(',');
}
else
{
if (j != 0)
{
_putchar(' ');
_putchar(' ');
}
_putchar(s + '0');
if (j != 9)
{
_putchar(',');
}
}
}
_putchar('\n');
}
}

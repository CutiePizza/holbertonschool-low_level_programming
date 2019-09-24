#include "holberton.h"

void times_table(void)
{
int i, j;

for (i = 0; i < 10; i++)
{
	for (j = 0; j < 10; j++)
	{
int s = i*j;
if (s / 10 != 0 )
{
_putchar(s / 10 + '0');
}
_putchar(s % 10 + '0');
if ( j != 9 )
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}

}


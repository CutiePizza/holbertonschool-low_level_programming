#include "holberton.h"
/**
 * print_number - function that prints a number
 * @n: integer
 * Return: integer
 */
void print_number(int n)
{
int c, i, j, k;

if (n == 0)
_putchar('0');
else
{
if (n < 0)
{
n = -n;
_putchar('-');
}

c = n;
i = 1;

while ((c / 10) != 0)
{
c = c / 10;
i++;
}

j = 1;

for (k = 0; k < i - 1; k++)
{
j *= 10;
}
while (j >= 1)
{
_putchar((n / j)+'0');
n = n % j;
j = j / 10;
}
}
}

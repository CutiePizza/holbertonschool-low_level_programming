#include "holberton.h"
/**
 * puts_half - prints half of a string
 *@str: string
 * Return: Always 0.
 */
void puts_half(char *str)
{
	int len, j, n;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}

if (len % 2 == 0)
{
	for (j = (len / 2); j < len; j++)
	{
		_putchar(str[j]);
	}
}
else
{
n = (len - 1) / 2;
	for (j = n + 1; j < len; j++)
	{
		_putchar(str[j]);
	}

}
_putchar('\n');
}

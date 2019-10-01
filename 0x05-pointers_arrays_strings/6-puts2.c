#include "holberton.h"
/**
 * puts2 - return odd lines
 *@str: character
 * Return: Always 0.
 */
void puts2(char *str)
{
	int len, j;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	len--;
	for (j = 0; j <= len; j++)
	{
		if (j % 2 == 0)
		{
		_putchar(str[j]);
		}
	}
_putchar('\n');
}
